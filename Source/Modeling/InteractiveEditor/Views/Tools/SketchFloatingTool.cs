﻿#region Usings

using System.Windows.Controls;
using InteractiveEditor.Constants;
using InteractiveEditor.Views.FloatingTool;
using NaroBasicPipes.Inputs;
using NaroCppCore.Occ.TopAbs;
using NaroPipes.Actions;
using OccCode;


#endregion

namespace InteractiveEditor.Views.Tools
{
    internal class SketchFloatingTool : FloatingToolGroupButton
    {
        public SketchFloatingTool()
            : base(FloatingToolNames.Sketch)
        {
        }

        public override bool AcceptEntity(SelectionContainer entity)
        {
            var selectedFaces = entity.Selection[TopAbsShapeEnum.TopAbs_FACE];
            if (selectedFaces.Count == 0)
                return false;
            return GeomUtils.GetFace(selectedFaces[0]) != null;
        }

        public override void PopulateView(StackPanel panel, SelectionContainer entity, ActionsGraph actionsGraph)
        {
            var view = new SketchToolsView(entity, actionsGraph);
            panel.Children.Add(view);
        }
    }
}