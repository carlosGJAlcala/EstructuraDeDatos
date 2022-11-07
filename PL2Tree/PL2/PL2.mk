##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=PL2
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=E:/BraveHeart/cpp/dS/Tree
ProjectPath            :=E:/BraveHeart/cpp/dS/Tree/PL2
IntermediateDirectory  :=../build-$(ConfigurationName)/PL2
OutDir                 :=../build-$(ConfigurationName)/PL2
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=carlo
Date                   :=10/01/2022
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
CXXFLAGS :=  -g -O0 -std=c++17 $(Preprocessors)
CFLAGS   :=  -g -O0 -std=c++17 $(Preprocessors)
ASFLAGS  := 
AS       := C:/MinGW/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=../build-$(ConfigurationName)/PL2/modelo_tree_Tree.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/PL2/modelo_ds_Label.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/PL2/modelo_ds_Node.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/PL2/modelo_ds_Element.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/PL2/vista_View.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/PL2/modelo_ds_Data.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/PL2/control_Core.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/PL2/modelo_list_List.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/PL2/modelo_queue_Queue.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/PL2/main.cpp$(ObjectSuffix) \
	../build-$(ConfigurationName)/PL2/modelo_stack_Stack.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/PL2/.d $(Objects) 
	@if not exist "..\build-$(ConfigurationName)\PL2" mkdir "..\build-$(ConfigurationName)\PL2"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "..\build-$(ConfigurationName)\PL2" mkdir "..\build-$(ConfigurationName)\PL2"
	@if not exist ""..\build-$(ConfigurationName)\bin"" mkdir ""..\build-$(ConfigurationName)\bin""

../build-$(ConfigurationName)/PL2/.d:
	@if not exist "..\build-$(ConfigurationName)\PL2" mkdir "..\build-$(ConfigurationName)\PL2"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/PL2/modelo_tree_Tree.cpp$(ObjectSuffix): modelo/tree/Tree.cpp ../build-$(ConfigurationName)/PL2/modelo_tree_Tree.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "E:/BraveHeart/cpp/dS/Tree/PL2/modelo/tree/Tree.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/modelo_tree_Tree.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/PL2/modelo_tree_Tree.cpp$(DependSuffix): modelo/tree/Tree.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/PL2/modelo_tree_Tree.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/PL2/modelo_tree_Tree.cpp$(DependSuffix) -MM modelo/tree/Tree.cpp

../build-$(ConfigurationName)/PL2/modelo_tree_Tree.cpp$(PreprocessSuffix): modelo/tree/Tree.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/PL2/modelo_tree_Tree.cpp$(PreprocessSuffix) modelo/tree/Tree.cpp

../build-$(ConfigurationName)/PL2/modelo_ds_Label.cpp$(ObjectSuffix): modelo/ds/Label.cpp ../build-$(ConfigurationName)/PL2/modelo_ds_Label.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "E:/BraveHeart/cpp/dS/Tree/PL2/modelo/ds/Label.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/modelo_ds_Label.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/PL2/modelo_ds_Label.cpp$(DependSuffix): modelo/ds/Label.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/PL2/modelo_ds_Label.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/PL2/modelo_ds_Label.cpp$(DependSuffix) -MM modelo/ds/Label.cpp

../build-$(ConfigurationName)/PL2/modelo_ds_Label.cpp$(PreprocessSuffix): modelo/ds/Label.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/PL2/modelo_ds_Label.cpp$(PreprocessSuffix) modelo/ds/Label.cpp

../build-$(ConfigurationName)/PL2/modelo_ds_Node.cpp$(ObjectSuffix): modelo/ds/Node.cpp ../build-$(ConfigurationName)/PL2/modelo_ds_Node.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "E:/BraveHeart/cpp/dS/Tree/PL2/modelo/ds/Node.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/modelo_ds_Node.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/PL2/modelo_ds_Node.cpp$(DependSuffix): modelo/ds/Node.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/PL2/modelo_ds_Node.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/PL2/modelo_ds_Node.cpp$(DependSuffix) -MM modelo/ds/Node.cpp

../build-$(ConfigurationName)/PL2/modelo_ds_Node.cpp$(PreprocessSuffix): modelo/ds/Node.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/PL2/modelo_ds_Node.cpp$(PreprocessSuffix) modelo/ds/Node.cpp

../build-$(ConfigurationName)/PL2/modelo_ds_Element.cpp$(ObjectSuffix): modelo/ds/Element.cpp ../build-$(ConfigurationName)/PL2/modelo_ds_Element.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "E:/BraveHeart/cpp/dS/Tree/PL2/modelo/ds/Element.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/modelo_ds_Element.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/PL2/modelo_ds_Element.cpp$(DependSuffix): modelo/ds/Element.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/PL2/modelo_ds_Element.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/PL2/modelo_ds_Element.cpp$(DependSuffix) -MM modelo/ds/Element.cpp

../build-$(ConfigurationName)/PL2/modelo_ds_Element.cpp$(PreprocessSuffix): modelo/ds/Element.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/PL2/modelo_ds_Element.cpp$(PreprocessSuffix) modelo/ds/Element.cpp

../build-$(ConfigurationName)/PL2/vista_View.cpp$(ObjectSuffix): vista/View.cpp ../build-$(ConfigurationName)/PL2/vista_View.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "E:/BraveHeart/cpp/dS/Tree/PL2/vista/View.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/vista_View.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/PL2/vista_View.cpp$(DependSuffix): vista/View.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/PL2/vista_View.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/PL2/vista_View.cpp$(DependSuffix) -MM vista/View.cpp

../build-$(ConfigurationName)/PL2/vista_View.cpp$(PreprocessSuffix): vista/View.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/PL2/vista_View.cpp$(PreprocessSuffix) vista/View.cpp

../build-$(ConfigurationName)/PL2/modelo_ds_Data.cpp$(ObjectSuffix): modelo/ds/Data.cpp ../build-$(ConfigurationName)/PL2/modelo_ds_Data.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "E:/BraveHeart/cpp/dS/Tree/PL2/modelo/ds/Data.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/modelo_ds_Data.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/PL2/modelo_ds_Data.cpp$(DependSuffix): modelo/ds/Data.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/PL2/modelo_ds_Data.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/PL2/modelo_ds_Data.cpp$(DependSuffix) -MM modelo/ds/Data.cpp

../build-$(ConfigurationName)/PL2/modelo_ds_Data.cpp$(PreprocessSuffix): modelo/ds/Data.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/PL2/modelo_ds_Data.cpp$(PreprocessSuffix) modelo/ds/Data.cpp

../build-$(ConfigurationName)/PL2/control_Core.cpp$(ObjectSuffix): control/Core.cpp ../build-$(ConfigurationName)/PL2/control_Core.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "E:/BraveHeart/cpp/dS/Tree/PL2/control/Core.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/control_Core.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/PL2/control_Core.cpp$(DependSuffix): control/Core.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/PL2/control_Core.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/PL2/control_Core.cpp$(DependSuffix) -MM control/Core.cpp

../build-$(ConfigurationName)/PL2/control_Core.cpp$(PreprocessSuffix): control/Core.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/PL2/control_Core.cpp$(PreprocessSuffix) control/Core.cpp

../build-$(ConfigurationName)/PL2/modelo_list_List.cpp$(ObjectSuffix): modelo/list/List.cpp ../build-$(ConfigurationName)/PL2/modelo_list_List.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "E:/BraveHeart/cpp/dS/Tree/PL2/modelo/list/List.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/modelo_list_List.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/PL2/modelo_list_List.cpp$(DependSuffix): modelo/list/List.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/PL2/modelo_list_List.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/PL2/modelo_list_List.cpp$(DependSuffix) -MM modelo/list/List.cpp

../build-$(ConfigurationName)/PL2/modelo_list_List.cpp$(PreprocessSuffix): modelo/list/List.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/PL2/modelo_list_List.cpp$(PreprocessSuffix) modelo/list/List.cpp

../build-$(ConfigurationName)/PL2/modelo_queue_Queue.cpp$(ObjectSuffix): modelo/queue/Queue.cpp ../build-$(ConfigurationName)/PL2/modelo_queue_Queue.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "E:/BraveHeart/cpp/dS/Tree/PL2/modelo/queue/Queue.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/modelo_queue_Queue.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/PL2/modelo_queue_Queue.cpp$(DependSuffix): modelo/queue/Queue.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/PL2/modelo_queue_Queue.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/PL2/modelo_queue_Queue.cpp$(DependSuffix) -MM modelo/queue/Queue.cpp

../build-$(ConfigurationName)/PL2/modelo_queue_Queue.cpp$(PreprocessSuffix): modelo/queue/Queue.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/PL2/modelo_queue_Queue.cpp$(PreprocessSuffix) modelo/queue/Queue.cpp

../build-$(ConfigurationName)/PL2/main.cpp$(ObjectSuffix): main.cpp ../build-$(ConfigurationName)/PL2/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "E:/BraveHeart/cpp/dS/Tree/PL2/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/PL2/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/PL2/main.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/PL2/main.cpp$(DependSuffix) -MM main.cpp

../build-$(ConfigurationName)/PL2/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/PL2/main.cpp$(PreprocessSuffix) main.cpp

../build-$(ConfigurationName)/PL2/modelo_stack_Stack.cpp$(ObjectSuffix): modelo/stack/Stack.cpp ../build-$(ConfigurationName)/PL2/modelo_stack_Stack.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "E:/BraveHeart/cpp/dS/Tree/PL2/modelo/stack/Stack.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/modelo_stack_Stack.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/PL2/modelo_stack_Stack.cpp$(DependSuffix): modelo/stack/Stack.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/PL2/modelo_stack_Stack.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/PL2/modelo_stack_Stack.cpp$(DependSuffix) -MM modelo/stack/Stack.cpp

../build-$(ConfigurationName)/PL2/modelo_stack_Stack.cpp$(PreprocessSuffix): modelo/stack/Stack.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/PL2/modelo_stack_Stack.cpp$(PreprocessSuffix) modelo/stack/Stack.cpp


-include ../build-$(ConfigurationName)/PL2//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


