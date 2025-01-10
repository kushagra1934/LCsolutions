class Solution {
    public List<String> wordSubsets(String[] words1, String[] words2) {
        List<String> list = new ArrayList<>();

        int[] minReqLetters = new int[26];
        

        for(int i=0;i<words2.length;i++){
            String word2 = words2[i];
            int[] temp = new int[26];
            
            for(int j=0;j<word2.length();j++){
                int charInd = word2.charAt(j)-'a';
                temp[charInd]++;

                minReqLetters[charInd] = Math.max(minReqLetters[charInd], temp[charInd]);
            }
        }

        // for(int j=0;j<26;j++){
        //         System.out.print(minReqLetters[j]+"  ");
               
        //     }
        //                     System.out.println();

        for(int i=0;i<words1.length;i++){
            int[] temp = Arrays.copyOf(minReqLetters, minReqLetters.length);
            String word1 = words1[i];

            for(int j=0;j<word1.length();j++){
                int charInd = word1.charAt(j)- 'a';
                temp[charInd]--;
            }

            boolean isUni = true;

            for(int j=0;j<26;j++){
                // System.out.print(temp[j]+"  ");
                if(temp[j]>0){
                    isUni = false;
                }
            }
                            // System.out.println();


            if(isUni){
                list.add(word1);
            }
        }
        
        return list;
    }
}