#include<cstdio>
class CMyString
{
public:
	CMyString(char* pData);
	CMyString(CMyString& str);
	void print();

private:
	char* m_pData;
};
void CMyString::print() {
	if(m_pData!=nullptr)
		printf(m_pData, "%s");
	else printf("nullptr");
}
CMyString::CMyString(char* pData) {
	m_pData = pData;
}
int main() {
	char temp[] = "hello world";
	int* temp2 = new int(21);
	CMyString a(temp2);
	a.print();
	
}