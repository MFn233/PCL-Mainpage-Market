#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
using namespace std;
void useTemplate(string t,string val) {
}
int main() {
	freopen("./in.txt","r",stdin);
	freopen("./out.xaml","w",stdout);
	string title,link,disc;
	while(true) {
		getline(cin,title);
		if(title == "::exit") {
			break;
		}
		cout<<"<local:MyCard Margin=\"0,0,0,12\" Title=\"" + title + "\" CanSwap=\"True\" IsSwaped=\"True\">";
		cout<<"<StackPanel Margin=\"24,40,24,15\">";
		string temp;
		getline(cin,temp);
		if(temp == "::disc") {
			while(true) {
				getline(cin,disc);
				if(disc=="::enddisc") {
					break;
				} else {	
					cout<<"<TextBlock Margin=\"5,0,5,12\" TextWrapping=\"Wrap\" HorizontalAlignment=\"Left\" Foreground=\"{DynamicResource ColorBrush1}\" Text=\"" + disc + "\" />";
				}
			}
		}
		getline(cin,link);
		cout<<"<TextBlock Margin=\"20,0,5,6\" TextWrapping=\"Wrap\" HorizontalAlignment=\"Left\" Foreground=\"{DynamicResource ColorBrush1}\" Text=\"直链: " + link + "\" />";
		cout<<"<local:MyTextButton Margin=\"20,0,5,6\" EventType=\"复制文本\" Text=\"点击复制\" EventData=\""+ link +"\" ToolTip=\"点击复制到剪贴板\" />";
		cout<<"<local:MyTextButton Margin=\"20,0,5,0\" EventType=\"打开网页\" Text=\"点击打开链接\" EventData=\""+ link +"\" ToolTip=\"点击在浏览器打开\" />";
		cout<<"</StackPanel></local:MyCard>";

		//printf("<local:MyCard Margin=\"0,0,0,12\" Title=\"%s\" CanSwap=\"True\" IsSwaped=\"False\"><StackPanel Margin=\"24,40,24,15\"><TextBlock Margin=\"5,0,5,12\" TextWrapping=\"Wrap\" HorizontalAlignment=\"Left\" Foreground=\"{DynamicResource ColorBrush1}\" Text=\"%s\" /><local:MyTextButton Margin=\"5,0,5,0\" EventType=\"复制文本\" Text=\"%s\" EventData=\"%s\" ToolTip=\"点击复制到剪贴板\" /></StackPanel></local:MyCard>", &title, &disc, &link, &link);
		/*cout<<"<local:MyCard Margin=\"0,0,0,12\" Title=\"" + title + "\" CanSwap=\"True\" IsSwaped=\"False\">";
		cout<<"<StackPanel Margin=\"24,40,24,15\">";
		cout<<"<TextBlock Margin=\"5,0,5,12\" TextWrapping=\"Wrap\" HorizontalAlignment=\"Left\" Foreground=\"{DynamicResource ColorBrush1}\" Text=\"" + disc + "\" />";
		cout<<"<local:MyTextButton Margin=\"5,0,5,0\" EventType=\"复制文本\" Text=\""+ link +"\" EventData=\""+ link +"\" ToolTip=\"点击复制到剪贴板\" />";
		cout<<"</StackPanel></local:MyCard>";*/
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}