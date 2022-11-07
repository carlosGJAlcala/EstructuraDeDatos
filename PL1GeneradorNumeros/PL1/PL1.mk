##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=PL1
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=C:/Users/carlo/Desktop/pro1/workspace/workspace
ProjectPath            :=C:/Users/carlo/Desktop/pro1/workspace/workspace/PL1
IntermediateDirectory  :=../build-$(ConfigurationName)/PL1
OutDir                 :=../build-$(ConfigurationName)/PL1
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=carlo
Date                   :=15/11/2021
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :=C:/MinGW/bin/g++.exe
SharedObjectLinkerName :=C:/MinGW/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=..\build-$(ConfigurationName)\bin\$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
RcCmpOptions           := 
RcCompilerName         :=C:/MinGW/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := C:/MinGW/bin/ar.exe rcu
CXX      := C:/MinGW/bin/g++.exe
CC       := C:/MinGW/bin/gcc.exe
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/MinGW/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=../build-$(ConfigurationName)/PL1/modelo_elements_Data.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/PL1/modelo_list_List.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/PL1/vista_Vista.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/PL1/modelo_queue_Queue.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/PL1/control_Core.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/PL1/main.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/PL1/modelo_stack_Stack.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/PL1/modelo_elements_Element.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/PL1/.d $(Objects) 
	@if not exist "..\build-$(ConfigurationName)\PL1" mkdir "..\build-$(ConfigurationName)\PL1"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "..\build-$(ConfigurationName)\PL1" mkdir "..\build-$(ConfigurationName)\PL1"
	@if not exist ""..\build-$(ConfigurationName)\bin"" mkdir ""..\build-$(ConfigurationName)\bin""

../build-$(ConfigurationName)/PL1/.d:
	@if not exist "..\build-$(ConfigurationName)\PL1" mkdir "..\build-$(ConfigurationName)\PL1"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/PL1/modelo_elements_Data.cpp$(ObjectSuffix): modelo/elements/Data.cpp ../build-$(ConfigurationName)/PL1/modelo_elements_Data.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/carlo/Desktop/pro1/workspace/workspace/PL1/modelo/elements/Data.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/modelo_elements_Data.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/PL1/modelo_elements_Data.cpp$(DependSuffix): modelo/elements/Data.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/PL1/modelo_elements_Data.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/PL1/modelo_elements_Data.cpp$(DependSuffix) -MM modelo/elements/Data.cpp

../build-$(ConfigurationName)/PL1/modelo_elements_Data.cpp$(PreprocessSuffix): modelo/elements/Data.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/PL1/modelo_elements_Data.cpp$(PreprocessSuffix) modelo/elements/Data.cpp

../build-$(ConfigurationName)/PL1/modelo_list_List.cpp$(ObjectSuffix): modelo/list/List.cpp ../build-$(ConfigurationName)/PL1/modelo_list_List.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/carlo/Desktop/pro1/workspace/workspace/PL1/modelo/list/List.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/modelo_list_List.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/PL1/modelo_list_List.cpp$(DependSuffix): modelo/list/List.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/PL1/modelo_list_List.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/PL1/modelo_list_List.cpp$(DependSuffix) -MM modelo/list/List.cpp

../build-$(ConfigurationName)/PL1/modelo_list_List.cpp$(PreprocessSuffix): modelo/list/List.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/PL1/modelo_list_List.cpp$(PreprocessSuffix) modelo/list/List.cpp

../build-$(ConfigurationName)/PL1/vista_Vista.cpp$(ObjectSuffix): vista/Vista.cpp ../build-$(ConfigurationName)/PL1/vista_Vista.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/carlo/Desktop/pro1/workspace/workspace/PL1/vista/Vista.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/vista_Vista.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/PL1/vista_Vista.cpp$(DependSuffix): vista/Vista.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/PL1/vista_Vista.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/PL1/vista_Vista.cpp$(DependSuffix) -MM vista/Vista.cpp

../build-$(ConfigurationName)/PL1/vista_Vista.cpp$(PreprocessSuffix): vista/Vista.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/PL1/vista_Vista.cpp$(PreprocessSuffix) vista/Vista.cpp

../build-$(ConfigurationName)/PL1/modelo_queue_Queue.cpp$(ObjectSuffix): modelo/queue/Queue.cpp ../build-$(ConfigurationName)/PL1/modelo_queue_Queue.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/carlo/Desktop/pro1/workspace/workspace/PL1/modelo/queue/Queue.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/modelo_queue_Queue.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/PL1/modelo_queue_Queue.cpp$(DependSuffix): modelo/queue/Queue.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/PL1/modelo_queue_Queue.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/PL1/modelo_queue_Queue.cpp$(DependSuffix) -MM modelo/queue/Queue.cpp

../build-$(ConfigurationName)/PL1/modelo_queue_Queue.cpp$(PreprocessSuffix): modelo/queue/Queue.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/PL1/modelo_queue_Queue.cpp$(PreprocessSuffix) modelo/queue/Queue.cpp

../build-$(ConfigurationName)/PL1/control_Core.cpp$(ObjectSuffix): control/Core.cpp ../build-$(ConfigurationName)/PL1/control_Core.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/carlo/Desktop/pro1/workspace/workspace/PL1/control/Core.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/control_Core.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/PL1/control_Core.cpp$(DependSuffix): control/Core.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/PL1/control_Core.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/PL1/control_Core.cpp$(DependSuffix) -MM control/Core.cpp

../build-$(ConfigurationName)/PL1/control_Core.cpp$(PreprocessSuffix): control/Core.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/PL1/control_Core.cpp$(PreprocessSuffix) control/Core.cpp

../build-$(ConfigurationName)/PL1/main.cpp$(ObjectSuffix): main.cpp ../build-$(ConfigurationName)/PL1/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/carlo/Desktop/pro1/workspace/workspace/PL1/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/PL1/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/PL1/main.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/PL1/main.cpp$(DependSuffix) -MM main.cpp

../build-$(ConfigurationName)/PL1/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/PL1/main.cpp$(PreprocessSuffix) main.cpp

../build-$(ConfigurationName)/PL1/modelo_stack_Stack.cpp$(ObjectSuffix): modelo/stack/Stack.cpp ../build-$(ConfigurationName)/PL1/modelo_stack_Stack.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/carlo/Desktop/pro1/workspace/workspace/PL1/modelo/stack/Stack.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/modelo_stack_Stack.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/PL1/modelo_stack_Stack.cpp$(DependSuffix): modelo/stack/Stack.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/PL1/modelo_stack_Stack.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/PL1/modelo_stack_Stack.cpp$(DependSuffix) -MM modelo/stack/Stack.cpp

../build-$(ConfigurationName)/PL1/modelo_stack_Stack.cpp$(PreprocessSuffix): modelo/stack/Stack.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/PL1/modelo_stack_Stack.cpp$(PreprocessSuffix) modelo/stack/Stack.cpp

../build-$(ConfigurationName)/PL1/modelo_elements_Element.cpp$(ObjectSuffix): modelo/elements/Element.cpp ../build-$(ConfigurationName)/PL1/modelo_elements_Element.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/carlo/Desktop/pro1/workspace/workspace/PL1/modelo/elements/Element.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/modelo_elements_Element.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/PL1/modelo_elements_Element.cpp$(DependSuffix): modelo/elements/Element.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/PL1/modelo_elements_Element.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/PL1/modelo_elements_Element.cpp$(DependSuffix) -MM modelo/elements/Element.cpp

../build-$(ConfigurationName)/PL1/modelo_elements_Element.cpp$(PreprocessSuffix): modelo/elements/Element.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/PL1/modelo_elements_Element.cpp$(PreprocessSuffix) modelo/elements/Element.cpp


-include ../build-$(ConfigurationName)/PL1//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


