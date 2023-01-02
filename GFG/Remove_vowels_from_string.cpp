// Remove_vowels_from_string
// https://practice.geeksforgeeks.org/problems/remove-vowels-from-string1446/1?fbclid=IwAR1UqO-HA78KclzEZwKsC7BtamFKnNjxPsEVoWzozGeo4N6B6wPY2CgUuR8

class Solution{
public:	
		
	string removeVowels(string S) 
	{
	    // Your code goes here

	    string sen;
	    for(int i=0;i<S.length();i++)
	    {
	        if(S[i]=='a' || S[i]=='e' || S[i]=='i' || S[i]=='o' || S[i]=='u')
	            continue;
	        else
	            sen.push_back(S[i]);
	    }
	    return sen;
	}
};
