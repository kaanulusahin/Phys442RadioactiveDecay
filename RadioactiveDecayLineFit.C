{
  c1 = new TCanvas("c1", "Radioactive decay linefits", 1000, 1000);
  c1->Divide(3,5); //Columns and rows

  c1->cd(1);

g = new TGraphErrors("2.5kV5PumpsWC.txt");
g->SetTitle("2.5kV 5 Pumps (without clamp)");
g->GetYaxis()->SetTitle("ln(1/s)");
g->GetXaxis()->SetTitle("T");

f = new TF1("f","[0]+[1]*x",0,600);
f->SetParName(0,"y-intercept");
f->SetParName(1,"slope");

g->Fit(f,"E");

gStyle->SetOptFit(111);

g->Draw("AP");

c1->cd(2);

g = new TGraphErrors("2.5kV10Pumps.txt");
g->SetTitle("2.5kV 10 Pumps");
g->GetYaxis()->SetTitle("ln(1/s)");
g->GetXaxis()->SetTitle("T");

f = new TF1("f","[0]+[1]*x",0,600);
f->SetParName(0,"y-intercept");
f->SetParName(1,"slope");

g->Fit(f,"E");

gStyle->SetOptFit(111);
g->Draw("AP");
//
c1->cd(3);

g = new TGraphErrors("2.5kV15Pumps.txt");
g->SetTitle("2.5kV 15 Pumps");
g->GetYaxis()->SetTitle("ln(1/s)");
g->GetXaxis()->SetTitle("T");

f = new TF1("f","[0]+[1]*x",0,600);
f->SetParName(0,"y-intercept");
f->SetParName(1,"slope");

g->Fit(f,"E");

gStyle->SetOptFit(111);
g->Draw("AP");
//
c1->cd(4);

g = new TGraphErrors("3.0kV5Pumps.txt");
g->SetTitle("3.0kV 5 Pumps");
g->GetYaxis()->SetTitle("ln(1/s)");
g->GetXaxis()->SetTitle("T");

f = new TF1("f","[0]+[1]*x",0,600);
f->SetParName(0,"y-intercept");
f->SetParName(1,"slope");

g->Fit(f,"E");

gStyle->SetOptFit(111);
g->Draw("AP");
//
c1->cd(5);

g = new TGraphErrors("3.0kV10Pumps.txt");
g->SetTitle("3.0kV 10 Pumps");
g->GetYaxis()->SetTitle("ln(1/s)");
g->GetXaxis()->SetTitle("T");

f = new TF1("f","[0]+[1]*x",0,600);
f->SetParName(0,"y-intercept");
f->SetParName(1,"slope");

g->Fit(f,"E");

gStyle->SetOptFit(111);
g->Draw("AP");
//
c1->cd(6);

g = new TGraphErrors("3.0kV15Pumps.txt");
g->SetTitle("3.0kV 15 Pumps");
g->GetYaxis()->SetTitle("ln(1/s)");
g->GetXaxis()->SetTitle("T");

f = new TF1("f","[0]+[1]*x",0,600);
f->SetParName(0,"y-intercept");
f->SetParName(1,"slope");

g->Fit(f,"E");

gStyle->SetOptFit(111);
g->Draw("AP");
//
c1->cd(7);

g = new TGraphErrors("3.5kV5PumpsWC.txt");
g->SetTitle("3.5kV 5 Pumps (without clamp)");
g->GetYaxis()->SetTitle("ln(1/s)");
g->GetXaxis()->SetTitle("T");

f = new TF1("f","[0]+[1]*x",0,600);
f->SetParName(0,"y-intercept");
f->SetParName(1,"slope");

g->Fit(f,"E");

gStyle->SetOptFit(111);
g->Draw("AP");
//
c1->cd(8);

g = new TGraphErrors("3.5kV10PumpsWC.txt");
g->SetTitle("3.5kV 10 Pumps (without clamp)");
g->GetYaxis()->SetTitle("ln(1/s)");
g->GetXaxis()->SetTitle("T");

f = new TF1("f","[0]+[1]*x",0,600);
f->SetParName(0,"y-intercept");
f->SetParName(1,"slope");

g->Fit(f,"E");

gStyle->SetOptFit(111);
g->Draw("AP");
//
c1->cd(9);

g = new TGraphErrors("3.5kV15Pumps.txt");
g->SetTitle("3.5kV 15 Pumps");
g->GetYaxis()->SetTitle("ln(1/s)");
g->GetXaxis()->SetTitle("T");

f = new TF1("f","[0]+[1]*x",0,600);
f->SetParName(0,"y-intercept");
f->SetParName(1,"slope");

g->Fit(f,"E");

gStyle->SetOptFit(111);
g->Draw("AP");
//
c1->cd(10);

g = new TGraphErrors("4.0kV5PumpsWC.txt");
g->SetTitle("4.0kV 5 Pumps (without clamp)");
g->GetYaxis()->SetTitle("ln(1/s)");
g->GetXaxis()->SetTitle("T");

f = new TF1("f","[0]+[1]*x",0,600);
f->SetParName(0,"y-intercept");
f->SetParName(1,"slope");

g->Fit(f,"E");

gStyle->SetOptFit(111);
g->Draw("AP");
//
c1->cd(11);

g = new TGraphErrors("4.0kV10Pumps.txt");
g->SetTitle("4.0kV 10 Pumps");
g->GetYaxis()->SetTitle("ln(1/s)");
g->GetXaxis()->SetTitle("T");

f = new TF1("f","[0]+[1]*x",0,600);
f->SetParName(0,"y-intercept");
f->SetParName(1,"slope");

g->Fit(f,"E");

gStyle->SetOptFit(111);
g->Draw("AP");
//
c1->cd(12);

g = new TGraphErrors("4.0kV15Pumps.txt");
g->SetTitle("4.0kV 15 Pumps");
g->GetYaxis()->SetTitle("ln(1/s)");
g->GetXaxis()->SetTitle("T");

f = new TF1("f","[0]+[1]*x",0,600);
f->SetParName(0,"y-intercept");
f->SetParName(1,"slope");

g->Fit(f,"E");

gStyle->SetOptFit(111);
g->Draw("AP");
//
c1->cd(13);

g = new TGraphErrors("4.5kV5Pumps.txt");
g->SetTitle("4.5kV 5 Pumps");
g->GetYaxis()->SetTitle("ln(1/s)");
g->GetXaxis()->SetTitle("T");

f = new TF1("f","[0]+[1]*x",0,600);
f->SetParName(0,"y-intercept");
f->SetParName(1,"slope");

g->Fit(f,"E");

gStyle->SetOptFit(111);
g->Draw("AP");
//
c1->cd(14);

g = new TGraphErrors("4.5kV10Pumps.txt");
g->SetTitle("4.5kV 10 Pumps");
g->GetYaxis()->SetTitle("ln(1/s)");
g->GetXaxis()->SetTitle("T");

f = new TF1("f","[0]+[1]*x",0,600);
f->SetParName(0,"y-intercept");
f->SetParName(1,"slope");

g->Fit(f,"E");

gStyle->SetOptFit(111);
g->Draw("AP");
//
c1->cd(15);

g = new TGraphErrors("4.5kV15Pumps.txt");
g->SetTitle("4.5kV 15 Pumps");
g->GetYaxis()->SetTitle("ln(1/s)");
g->GetXaxis()->SetTitle("T");

f = new TF1("f","[0]+[1]*x",0,600);
f->SetParName(0,"y-intercept");
f->SetParName(1,"slope");

g->Fit(f,"E");

gStyle->SetOptFit(111);
g->Draw("AP");

}
