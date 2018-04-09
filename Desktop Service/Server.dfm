object HostService: THostService
  OldCreateOrder = False
  DisplayName = 'HostService'
  Height = 288
  Width = 482
  object TCPServer: TIdTCPServer
    Active = True
    Bindings = <>
    DefaultPort = 32000
    MaxConnections = 128
    OnExecute = TCPServerExecute
    Left = 16
    Top = 16
  end
end
