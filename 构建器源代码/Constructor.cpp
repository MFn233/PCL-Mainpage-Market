#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
using namespace std;
void useTemplate(string t,string val) {
}
int main() {
	freopen("./in.txt","r",stdin);
	freopen("./market.xaml","w",stdout);
	string title,link,disc;
	cout<<"<local:MyCard Margin=\"0,0,0,12\" Title=\"欢迎页\" CanSwap=\"True\" IsSwaped=\"False\"> <StackPanel Margin=\"24,40,24,15\">  <TextBlock HorizontalAlignment=\"Center\" Margin=\"0,0,0,12\" Foreground=\"{DynamicResource ColorBrush2}\" FontSize=\"24\"   Text=\"欢迎来到主页市场!\" />  <Image Height=\"50\" Margin=\"0,0,0,12\" HorizontalAlignment=\"Center\" Source=\"pack://application:,,,/images/Blocks/CommandBlock.png\" />  <TextBlock Margin=\"5,0,5,12\" TextWrapping=\"Wrap\" HorizontalAlignment=\"Left\" Foreground=\"{DynamicResource ColorBrush1}\" Text=\"这是PCL主页市场，用于分享未被载入预设的主页。在GitHub发送pull request以投稿你的主页，只要有完整的标题、简介与直链，我们都会随之载入。\" />  <Grid>   <Grid.ColumnDefinitions><ColumnDefinition Width=\"5*\" /><ColumnDefinition Width=\"0.3*\" /><ColumnDefinition Width=\"0.5*\" /></Grid.ColumnDefinitions><local:MyIconButton Grid.Column=\"1\" LogoScale=\"1.2\" Logo=\"M13.5,4A1.5,1.5 0 0,0 12,5.5A1.5,1.5 0 0,0 13.5,7A1.5,1.5 0 0,0 15,5.5A1.5,1.5 0 0,0 13.5,4M13.14,8.77C11.95,8.87 8.7,11.46 8.7,11.46C8.5,11.61 8.56,11.6 8.72,11.88C8.88,12.15 8.86,12.17 9.05,12.04C9.25,11.91 9.58,11.7 10.13,11.36C12.25,10 10.47,13.14 9.56,18.43C9.2,21.05 11.56,19.7 12.17,19.3C12.77,18.91 14.38,17.8 14.54,17.69C14.76,17.54 14.6,17.42 14.43,17.17C14.31,17 14.19,17.12 14.19,17.12C13.54,17.55 12.35,18.45 12.19,17.88C12,17.31 13.22,13.4 13.89,10.71C14,10.07 14.3,8.67 13.14,8.77Z\" Height=\"21\" Margin=\"0,5,0,0\" ToolTip=\"GitHub项目仓库\" EventData=\"https://github.com/MFn233/PCL-Mainpage-Market/\" EventType=\"打开网页\" VerticalAlignment=\"Bottom\"/><local:MyIconButton Grid.Column=\"2\" LogoScale=\"1.2\" Logo=\"M256.455,8C322.724,8.119,382.892,34.233,427.314,76.685L463.029,40.97C478.149,25.851,504,36.559,504,57.941L504,192C504,205.255,493.255,216,480,216L345.941,216C324.559,216,313.851,190.149,328.97,175.029L370.72,133.279C339.856,104.38 299.919,88.372 257.49,88.006 165.092,87.208 87.207,161.983 88.0059999999999,257.448 88.764,348.009 162.184,424 256,424 297.127,424 335.997,409.322 366.629,382.444 371.372,378.283 378.535,378.536 382.997,382.997L422.659,422.659C427.531,427.531 427.29,435.474 422.177,440.092 378.202,479.813 319.926,504 256,504 119.034,504 8.001,392.967 8,256.002 7.999,119.193 119.646,7.755 256.455,8z\" Height=\"21\" Margin=\"0,5,0,0\" ToolTip=\"点此刷新\" EventType=\"刷新主页\" VerticalAlignment=\"Bottom\"/>  </Grid> </StackPanel></local:MyCard>";
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