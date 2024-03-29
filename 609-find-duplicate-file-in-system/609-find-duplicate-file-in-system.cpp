class Solution {
public:
   vector<vector<string>> findDuplicate(vector<string>& paths) {
	vector<vector<string>> ans;
	unordered_map<string, vector<string>> m;

	for (auto i: paths) {
		string chunk = "", path = "";
		stringstream ss(i);

		while(ss >> chunk) {
			// cout<<chunk<<endl;

			if (path == "") {  // this will run, if the chunk is a path
				path = chunk;
				continue;
			}

			// this will run, if the chunk is a file    
			string reversedContent = "";
			for (int j=chunk.length()-1; chunk[--j] != '(';)
				reversedContent += chunk[j];
			// cout<<"reversed content = "<<reversedContent<<endl;

			string fileName = "";
			for (int j=0; chunk[j] != '('; j++)
				fileName += chunk[j];
			// cout<<"fileName = "<<fileName<<endl;

			m[reversedContent].push_back(path + '/' + fileName);
		}
	}

	for (auto &[revContent, pathAndFile]: m)
		if (pathAndFile.size() > 1)
			ans.push_back(pathAndFile);

	return ans;
}
};