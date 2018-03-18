program ManagerProject;

uses
  System.StartUpCopy,
  FMX.Forms,
  Manager in 'Manager.pas' {Form1};

{$R *.res}

begin
  Application.Initialize;
  Application.CreateForm(TForm1, Form1);
  Application.Run;
end.
