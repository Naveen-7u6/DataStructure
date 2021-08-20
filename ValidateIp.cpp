int isValid(string s) {
string temp;
int count =0;
long long ip;
for(int i=0;i<=s.size();i++)
{
if(s[i]=='.' || i==s.size())
{
count++;
if(temp.empty())
return 0;
if(temp[0]=='0' && temp.size()>1)
return 0;
stringstream ss(temp);
ss>>ip;
if(ip<0 || ip>255)
{
return 0;
}
temp.clear();
}
else if(s[i]>='0' && s[i]<='9')
{
temp+=s[i];
}
else
{
return 0;
}
}

return count==4?1:0;

}
