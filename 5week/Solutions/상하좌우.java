import java.util.*; 

public class Main { 
    public static void main(String[] args) { 
        Scanner sc = new Scanner(System.in); 
        // 1. 입력 받기
        int n = sc.nextInt(); sc.nextLine(); 
        String[] plans = sc.nextLine().split(" "); 
        int x = 1, y = 1; 
        
        // 2. LRUD 이동방향 설정
        int[] dx = {0, 0, -1, 1}; 
        int[] dy = {-1, 1, 0, 0}; 
        char[] moveTypes = {'L', 'R', 'U', 'D'}; 
        
        for (int i = 0; i < plans.length; i++) { 
            char plan = plans[i].charAt(0); 
            int nx = -1, ny = -1; 
          
            for (int j = 0; j < 4; j++) { 
                if (plan == moveTypes[j]) { 
                    nx = x + dx[j]; 
                    ny = y + dy[j]; 
                } 
            } 
          
            if (nx < 1 || ny < 1 || nx > n || ny > n) continue;

            x = nx; 
            y = ny; 
        } 
            System.out.println(x + " " + y); 
    }
}
