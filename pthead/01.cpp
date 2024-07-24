#include <iostream>
#include <windows.h>

using namespace std;

// �̵߳���ڵ㺯��
DWORD WINAPI MyThreadFunction(LPVOID lpParam) 
{
    int threadID = reinterpret_cast<uintptr_t>(lpParam);

    // �̵߳ľ������
    std::cout << "Thread " << threadID << " is running." << std::endl;

    return 0;
}

int main() 
{
    int num = 5;
    HANDLE hThreads[num];
    for(int i=0; i<num; i++)
    {
        // �����߳�
        HANDLE hThread = CreateThread(
            NULL,                   // Ĭ�ϵİ�ȫ��
            0,                      // Ĭ�ϵ�ջ��С
            MyThreadFunction,       // �̵߳���ڵ㺯��
            reinterpret_cast<LPVOID>(i+1),                   // ���ݸ��߳���ڵ㺯���Ĳ���
            0,                      // �߳���������
            NULL                    // ���ڴ洢�߳�ID��ָ��
        );
        if (NULL == hThreads[i]) 
        {
            std::cerr << "Failed to create thread." << std::endl;
            return 1;
        }
    }

    // ���̼߳���ִ����������

    // �ȴ������߳̽���
    WaitForMultipleObjects(num, hThreads, TRUE, INFINITE);

    // �ر��߳̾��
    for (int i = 0; i < num; ++i) 
    {
        CloseHandle(hThreads[i]);
        std::cout<<"Thread["<<i<<"] closed"<<std::endl;
    }

    return 0;
}






