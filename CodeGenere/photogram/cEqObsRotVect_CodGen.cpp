/*Header-MicMac-eLiSe-25/06/2007

    MicMac : Multi Image Correspondances par Methodes Automatiques de Correlation
    eLiSe  : ELements of an Image Software Environnement

    www.micmac.ign.fr

   
    Copyright : Institut Geographique National
    Author : Marc Pierrot Deseilligny
    Contributors : Gregoire Maillet, Didier Boldo.

[1] M. Pierrot-Deseilligny, N. Paparoditis.
    "A multiresolution and optimization-based image matching approach:
    An application to surface reconstruction from SPOT5-HRS stereo imagery."
    In IAPRS vol XXXVI-1/W41 in ISPRS Workshop On Topographic Mapping From Space
    (With Special Emphasis on Small Satellites), Ankara, Turquie, 02-2006.

[2] M. Pierrot-Deseilligny, "MicMac, un lociel de mise en correspondance
    d'images, adapte au contexte geograhique" to appears in 
    Bulletin d'information de l'Institut Geographique National, 2007.

Francais :

   MicMac est un logiciel de mise en correspondance d'image adapte 
   au contexte de recherche en information geographique. Il s'appuie sur
   la bibliotheque de manipulation d'image eLiSe. Il est distibue sous la
   licences Cecill-B.  Voir en bas de fichier et  http://www.cecill.info.


English :

    MicMac is an open source software specialized in image matching
    for research in geographic information. MicMac is built on the
    eLiSe image library. MicMac is governed by the  "Cecill-B licence".
    See below and http://www.cecill.info.

Header-MicMac-eLiSe-25/06/2007*/
// File Automatically generated by eLiSe

#include "general/all.h"
#include "private/all.h"
#include "cEqObsRotVect_CodGen.h"


cEqObsRotVect_CodGen::cEqObsRotVect_CodGen():
    cElCompiledFonc(3)
{
   AddIntRef (cIncIntervale("Orient",0,6));
   Close(false);
}



void cEqObsRotVect_CodGen::ComputeVal()
{
   double tmp0_ = mCompCoord[0];
   double tmp1_ = cos(tmp0_);
   double tmp2_ = mCompCoord[1];
   double tmp3_ = mCompCoord[2];
   double tmp4_ = sin(tmp0_);
   double tmp5_ = -(tmp4_);
   double tmp6_ = sin(tmp3_);
   double tmp7_ = sin(tmp2_);
   double tmp8_ = -(tmp7_);
   double tmp9_ = tmp1_*tmp8_;
   double tmp10_ = cos(tmp3_);
   double tmp11_ = cos(tmp2_);
   double tmp12_ = -(tmp6_);
   double tmp13_ = tmp4_*tmp8_;

  mVal[0] = (tmp1_*tmp11_*mLocP1_x+(tmp5_*tmp10_+tmp9_*tmp6_)*mLocP1_y+(tmp5_*tmp12_+tmp9_*tmp10_)*mLocP1_z)-mLocP2_x;

  mVal[1] = (tmp4_*tmp11_*mLocP1_x+(tmp1_*tmp10_+tmp13_*tmp6_)*mLocP1_y+(tmp1_*tmp12_+tmp13_*tmp10_)*mLocP1_z)-mLocP2_y;

  mVal[2] = (tmp7_*mLocP1_x+tmp11_*tmp6_*mLocP1_y+tmp11_*tmp10_*mLocP1_z)-mLocP2_z;

}


void cEqObsRotVect_CodGen::ComputeValDeriv()
{
   double tmp0_ = mCompCoord[0];
   double tmp1_ = cos(tmp0_);
   double tmp2_ = mCompCoord[1];
   double tmp3_ = mCompCoord[2];
   double tmp4_ = sin(tmp0_);
   double tmp5_ = -(tmp4_);
   double tmp6_ = sin(tmp3_);
   double tmp7_ = sin(tmp2_);
   double tmp8_ = -(tmp7_);
   double tmp9_ = tmp1_*tmp8_;
   double tmp10_ = cos(tmp3_);
   double tmp11_ = cos(tmp2_);
   double tmp12_ = -(1);
   double tmp13_ = tmp12_*tmp4_;
   double tmp14_ = -(tmp1_);
   double tmp15_ = -(tmp6_);
   double tmp16_ = tmp13_*tmp8_;
   double tmp17_ = -(tmp11_);
   double tmp18_ = tmp17_*tmp1_;
   double tmp19_ = tmp12_*tmp6_;
   double tmp20_ = tmp4_*tmp8_;
   double tmp21_ = tmp1_*tmp11_;
   double tmp22_ = tmp21_*mLocP1_x;
   double tmp23_ = tmp9_*tmp6_;
   double tmp24_ = tmp9_*tmp10_;
   double tmp25_ = tmp12_*tmp7_;
   double tmp26_ = tmp17_*tmp4_;
   double tmp27_ = -(tmp10_);

  mVal[0] = (tmp22_+(tmp5_*tmp10_+tmp23_)*mLocP1_y+(tmp5_*tmp15_+tmp24_)*mLocP1_z)-mLocP2_x;

  mCompDer[0][0] = tmp13_*tmp11_*mLocP1_x+(tmp14_*tmp10_+tmp16_*tmp6_)*mLocP1_y+(tmp14_*tmp15_+tmp16_*tmp10_)*mLocP1_z;
  mCompDer[0][1] = tmp25_*tmp1_*mLocP1_x+tmp18_*tmp6_*mLocP1_y+tmp18_*tmp10_*mLocP1_z;
  mCompDer[0][2] = (tmp19_*tmp5_+tmp10_*tmp9_)*mLocP1_y+(tmp27_*tmp5_+tmp19_*tmp9_)*mLocP1_z;
  mCompDer[0][3] = 0;
  mCompDer[0][4] = 0;
  mCompDer[0][5] = 0;
  mVal[1] = (tmp4_*tmp11_*mLocP1_x+(tmp1_*tmp10_+tmp20_*tmp6_)*mLocP1_y+(tmp1_*tmp15_+tmp20_*tmp10_)*mLocP1_z)-mLocP2_y;

  mCompDer[1][0] = tmp22_+(tmp13_*tmp10_+tmp23_)*mLocP1_y+(tmp13_*tmp15_+tmp24_)*mLocP1_z;
  mCompDer[1][1] = tmp25_*tmp4_*mLocP1_x+tmp26_*tmp6_*mLocP1_y+tmp26_*tmp10_*mLocP1_z;
  mCompDer[1][2] = (tmp19_*tmp1_+tmp10_*tmp20_)*mLocP1_y+(tmp27_*tmp1_+tmp19_*tmp20_)*mLocP1_z;
  mCompDer[1][3] = 0;
  mCompDer[1][4] = 0;
  mCompDer[1][5] = 0;
  mVal[2] = (tmp7_*mLocP1_x+tmp11_*tmp6_*mLocP1_y+tmp11_*tmp10_*mLocP1_z)-mLocP2_z;

  mCompDer[2][0] = 0;
  mCompDer[2][1] = tmp11_*mLocP1_x+tmp25_*tmp6_*mLocP1_y+tmp25_*tmp10_*mLocP1_z;
  mCompDer[2][2] = tmp10_*tmp11_*mLocP1_y+tmp19_*tmp11_*mLocP1_z;
  mCompDer[2][3] = 0;
  mCompDer[2][4] = 0;
  mCompDer[2][5] = 0;
}


void cEqObsRotVect_CodGen::ComputeValDerivHessian()
{
  ELISE_ASSERT(false,"Foncteur cEqObsRotVect_CodGen Has no Der Sec");
}

void cEqObsRotVect_CodGen::SetP1_x(double aVal){ mLocP1_x = aVal;}
void cEqObsRotVect_CodGen::SetP1_y(double aVal){ mLocP1_y = aVal;}
void cEqObsRotVect_CodGen::SetP1_z(double aVal){ mLocP1_z = aVal;}
void cEqObsRotVect_CodGen::SetP2_x(double aVal){ mLocP2_x = aVal;}
void cEqObsRotVect_CodGen::SetP2_y(double aVal){ mLocP2_y = aVal;}
void cEqObsRotVect_CodGen::SetP2_z(double aVal){ mLocP2_z = aVal;}



double * cEqObsRotVect_CodGen::AdrVarLocFromString(const std::string & aName)
{
   if (aName == "P1_x") return & mLocP1_x;
   if (aName == "P1_y") return & mLocP1_y;
   if (aName == "P1_z") return & mLocP1_z;
   if (aName == "P2_x") return & mLocP2_x;
   if (aName == "P2_y") return & mLocP2_y;
   if (aName == "P2_z") return & mLocP2_z;
   return 0;
}


cElCompiledFonc::cAutoAddEntry cEqObsRotVect_CodGen::mTheAuto("cEqObsRotVect_CodGen",cEqObsRotVect_CodGen::Alloc);


cElCompiledFonc *  cEqObsRotVect_CodGen::Alloc()
{  return new cEqObsRotVect_CodGen();
}



/*Footer-MicMac-eLiSe-25/06/2007

Ce logiciel est un programme informatique servant à la mise en
correspondances d'images pour la reconstruction du relief.

Ce logiciel est régi par la licence CeCILL-B soumise au droit français et
respectant les principes de diffusion des logiciels libres. Vous pouvez
utiliser, modifier et/ou redistribuer ce programme sous les conditions
de la licence CeCILL-B telle que diffusée par le CEA, le CNRS et l'INRIA 
sur le site "http://www.cecill.info".

En contrepartie de l'accessibilité au code source et des droits de copie,
de modification et de redistribution accordés par cette licence, il n'est
offert aux utilisateurs qu'une garantie limitée.  Pour les mêmes raisons,
seule une responsabilité restreinte pèse sur l'auteur du programme,  le
titulaire des droits patrimoniaux et les concédants successifs.

A cet égard  l'attention de l'utilisateur est attirée sur les risques
associés au chargement,  à l'utilisation,  à la modification et/ou au
développement et à la reproduction du logiciel par l'utilisateur étant 
donné sa spécificité de logiciel libre, qui peut le rendre complexe à 
manipuler et qui le réserve donc à des développeurs et des professionnels
avertis possédant  des  connaissances  informatiques approfondies.  Les
utilisateurs sont donc invités à charger  et  tester  l'adéquation  du
logiciel à leurs besoins dans des conditions permettant d'assurer la
sécurité de leurs systèmes et ou de leurs données et, plus généralement, 
à l'utiliser et l'exploiter dans les mêmes conditions de sécurité. 

Le fait que vous puissiez accéder à cet en-tête signifie que vous avez 
pris connaissance de la licence CeCILL-B, et que vous en avez accepté les
termes.
Footer-MicMac-eLiSe-25/06/2007*/
