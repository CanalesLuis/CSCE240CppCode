
/* A Java program for a http_client */
import java.net.*; 
import java.io.*; 
import java.util.*;
  
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
			myWriter.write("URL redirected to "+ newUrl);
			myWriter.write("\nPrinting HTTP header info from "+ newUrl);
		}

		BufferedReader in = new BufferedReader(new InputStreamReader(connection.getInputStream()));
		
		

		String inputLine;
		StringBuffer html = new StringBuffer();
		
		/*Adds information to end of html string buffer until null*/
		while((inputLine = in.readLine()) != null) {
			html.append(inputLine);
		}
		

		String line = null;

		/*Printing all the header information*/
		Map<String, List<String>> map = connection.getHeaderFields();
		for (Map.Entry<String, List<String>> entry : map.entrySet())
		{
			myWriter.write("\n"+ entry.getKey() +" : "+ entry.getValue());
		}
		
		
		/*Prints to the end of the file with the URL Content*/
		
		myWriter.write("\n\n\nURL Content... \n" +html.toString());
		in.close();
		
	}


	public static void main(String[] args) throws IOException {
		http_client http_client = new http_client(args[0]);
	}

}
