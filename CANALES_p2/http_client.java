
/* A Java program for a http_client */
import java.net.*; 
import java.io.*; 
  
public class http_client 
{ 
	public http_client(String address) throws IOException {
		
		String url = address;
		FileWriter myWriter = new FileWriter("http_client_output");
		URL obj = new URL(url);
		HttpURLConnection connection = (HttpURLConnection) obj.openConnection();
		connection.setReadTimeout(5000);
		boolean redirect = false;

		int states = connection.getResponseCode();
		if(states != HttpURLConnection.HTTP_OK) {
			if(states == HttpURLConnection.HTTP_MOVED_TEMP || states == HttpURLConnection.HTTP_MOVED_PERM || states ==  HttpURLConnection.HTTP_SEE_OTHER)
				redirect = true;
		}

		if(redirect) {
			String newUrl = connection.getHeaderField("Location");

			String cookies = connection.getHeaderField("Set-Cookie");
			connection = (HttpURLConnection) new URL(newUrl).openConnection();
		}

		BufferedReader in = new BufferedReader(new InputStreamReader(connection.getInputStream()));
		
		

		String inputLine;
		StringBuffer html = new StringBuffer();
		
		while((inputLine = in.readLine()) != null) {
			html.append(inputLine);
		}
		

		String line = null;

		myWriter.write("URL Content... \n" +html.toString());
		myWriter.close();
		in.close();
		


		/*All of my objects setup for URL connection and for outputPrint*/
		/*
		URL url = new URL(address);
		URLConnection connection = url.openConnection();
		InputStream is = connection.getInputStream();
		FileWriter myWriter = new FileWriter("http_client_output");

		BufferedReader br = new BufferedReader(new InputStreamReader(is));

		String line = null;

		while((line = br.readLine()) != null) {
			myWriter.write(line);
			}
		myWriter.close();
		*/
	}


	public static void main(String[] args) throws IOException {
		http_client http_client = new http_client(args[0]);
	}

}
