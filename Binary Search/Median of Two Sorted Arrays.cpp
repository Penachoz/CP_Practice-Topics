//https://leetcode.com/problems/median-of-two-sorted-arrays/description/?envType=problem-list-v2&envId=binary-search&

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(), m  = nums2.size();
        int l = 0, r = 0, c = 0, number;
        float res;
        if(n==0){
            if(m%2==0){
                int middle = ((m)/2)-1;
                res= nums2[middle]+nums2[middle+1];
                return res/2;
            }
            else{
                int middle = (m-1)/2;
                return nums2[middle];
            }
        }
        if(m==0){
            if(n%2==0){
                int middle = ((n)/2)-1;
                res= nums1[middle]+nums1[middle+1];
                return res/2;
            }
            else{
                int middle = (n-1)/2;
                return nums1[middle];
            }
        }
        if((m+n)%2==0)
        {
            int middle = ((m+n)/2)-1;//recordar sumas la sig posicion y dividir
            while(l+r < m+n){
                if(l < n){
                    if(r < m){
                        if(nums1[l]<=nums2[r]){
                            number=nums1[l];
                            l++;
                        }
                        else{
                            number=nums2[r];
                            r++;
                        }
                    }
                    else{
                        number=nums1[l];
                        l++;
                    }
                }
                else{
                    number=nums2[r];
                    r++;
                }
                if(c==middle){
                    if(l<n && r<m)
                        if(nums1[l]<=nums2[r])res=nums1[l]+number;
                        else res=nums2[r]+number;
                    else if(l==n)res=nums2[r]+number;
                    else res=nums1[l]+number;
                    cout << "Hola" << " " << l << " " << r << " " << res << endl;
                    return res/2;
                }
                c++;
            }
        }else{
            int middle = ((n+m)-1)/2;
            while(l+r < n+m){
                if(l < n){
                    if(r < m){
                        if(nums1[l]<=nums2[r]){
                            number=nums1[l];
                            l++;
                        }
                        else{
                            number=nums2[r];
                            r++;
                        }
                    }
                    else{
                        number=nums1[l];
                        l++;
                    }
                }
                else{
                    number=nums2[r];
                    r++;
                }
                if(c==middle){
                    return number;
                }
                c++;
            }
        }
        return 100;
    }
};