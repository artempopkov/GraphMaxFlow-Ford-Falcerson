; -- 64Bit.iss --
; Demonstrates installation of a program built for the x64 (a.k.a. AMD64)
; architecture.
; To successfully run this installation and the program it installs,
; you must have a "x64" edition of Windows.

; SEE THE DOCUMENTATION FOR DETAILS ON CREATING .ISS SCRIPT FILES!

[Setup]
AppName=Ford_Falcerson_Graph
AppVersion=1.0
AppPublisher =Artem_Popkov
AppPublisherURL=https://vk.com/mr666tema666
WizardStyle=modern
DefaultDirName={autopf}\Ford_Falcerson_Graph
DefaultGroupName=Ford_Falcerson_Graph
UninstallDisplayIcon={app}\Graph.exe
Compression=lzma2
SolidCompression=yes
OutputDir=D:\
;userdocs:Inno Setup Examples Output
; "ArchitecturesAllowed=x64" specifies that Setup cannot run on
; anything but x64.
ArchitecturesAllowed=x64
; "ArchitecturesInstallIn64BitMode=x64" requests that the install be
; done in "64-bit mode" on x64, meaning it should use the native
; 64-bit Program Files directory and the 64-bit view of the registry.
ArchitecturesInstallIn64BitMode=x64

[Files]
Source: "CoursWork.exe"; DestDir: "{app}"; DestName: "Graph.exe"
Source: "Bin.ico"; DestDir: "{app}\icons"
Source: "Edge.ico"; DestDir: "{app}\icons"
Source: "Node.ico"; DestDir: "{app}\icons"
Source: "ReadMe.txt"; DestDir: "{app}"



[Icons]
Name: "{group}\Ford_Falcerson_Graph"; Filename: "{app}\Graph.exe"
