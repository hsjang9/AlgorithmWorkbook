#include <string>
#include <vector>

using namespace std;

int solution(int n, int k) {
    int answer = 0;
    int service = n/10;
    
    return 12000 * n + (k - service) * 2000;
}