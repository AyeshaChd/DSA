class Solution {
public:
    const int M = 1e9 + 7;
    int minimumCost(vector<int>& nums, int k) {
        long long total = 0;
        long long resources = k;
        long long total_cost = 0;
        long long operation = 0;

        for (int j = 0; j < nums.size(); j++) {
            if (resources < nums[j]) {
                int need = nums[j] - resources;
                int current_operation = (need + k - 1) / k;
                resources += current_operation * k;
                operation += current_operation;
            }
            resources = resources - nums[j];
        }
        if (operation % 2 == 0) {
            long long a = (operation / 2) % M;
            long long b = (operation + 1) % M;
            return (a * b) % M;
        }
            // dividing even part with 2 to make returning arr short

            //        } For example, if:

            // operation = 5

            // then:

            // 1 + 2 + 3 + 4 + 5 = 15

            // The shortcut formula is:

            // operation × (operation + 1) / 2
//           Even operation:
// (operation/2) × (operation+1)

// Odd operation:
// operation × ((operation+1)/2)  as operation+1 will be even 
            long long a = operation % M;
            long long b = ((operation + 1) / 2 % M);
            return (a * b) % M;
            // gave explation at end of read  me file of this problem in dsa repo 
        };
    };