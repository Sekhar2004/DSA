string sortByFrequency(int n, string& s)
{
	std::unordered_map<char, int> frequency;

    for (char c : s) 
	{
        frequency[c]++;
    }

    std::sort(s.begin(), s.end(), [&](char a, char b) 
	{
        return frequency[a] > frequency[b] || (frequency[a] == frequency[b] && a < b);
    });

    return s;
}
