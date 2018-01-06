package Login;

public class Data {
	String nama, hakAkses;
	private String username, password;

    public Data(String nama, String username, String password, String hakAkses) {
        this.nama = nama;
        this.username = username;
        this.password = password;
        this.hakAkses = hakAkses;
    }

    private String setUsername(){
    	return (this.username);
    }
    
    public String getUsername(){
    	return (setUsername());
    }
    
    private String setPassword(){
    	return (this.password);
    }
    
    public String getPassword(){
    	return (setPassword());
    }
}

