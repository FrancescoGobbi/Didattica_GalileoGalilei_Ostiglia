public class ClientePersonaErrato { 
  public static void main(String[] args) { 
    PersonaEsempio p1 = new PersonaEsempio(); 
	p1.setNome("Mario");
    p1.setCF("RSSMRI76K18G501K"); 
    System.out.println("p1 = <"+p1.getNome() + "; "+p1.getCF()+">"); 
	p1.nome = "Stefano";
	p1.codiceFiscale ="RSSSTF76K18G501K"; //errore il campo codiceFiscale e' private
    System.out.println("p1 = <"+p1.getNome() + "; "+p1.getCF()+">");  
  } 
}
