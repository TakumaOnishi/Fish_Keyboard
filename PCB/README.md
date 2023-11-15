基板（Printed Circuit Board）。  
３種類あり、それぞれ業者に発注して作ってもらう。  
  
### left, right  
・キースイッチを網羅して列と行に解釈し、マイコンのピンの直下に持ってくる基板。  
  
### wing  
・充電スイッチおよびリセットボタンをマイコンにつなげるとともに、それらの位置を固定するための基板。  
  
## 発注方法  
[JLCPCB](https://jlcpcb.com/)にアクセスし、`Add gerber file`に発注したい基板のzipをぶちこむ。  
![Screenshot 2023-11-12 at 17 59 32](https://github.com/TakumaOnishi/Fish_Keyboard/assets/85474111/f9f62589-ed47-4d21-93fc-2d452ecdb66f)  
規定値から変えるオプションは  
・PCB Qty：発注したい枚数  
・PCB Thickness：leftおよびrightは0.8mm、wingは1.0mm  
・Surface Finish：LeadFree HASL（環境配慮のため）  
wingの場合はこのまま進んで配送方法を選択して注文完了。  
leftおよびrightの場合は、さらにPCBA（PCB Assenbly；部品の取り付けサーヴィス）にチェックを入れ、  
![Screenshot 2023-11-12 at 18 01 11](https://github.com/TakumaOnishi/Fish_Keyboard/assets/85474111/2d8a31b4-77cb-4b87-9470-e5d11e88037d)  
・Confirm Parts Placement：Yes  
とする。  
Confirmを押して続くウィザードに沿ってそれぞれのCPLおよびBOMファイルをぶちこみ、  
<img width="1511" alt="Screenshot 2023-11-15 at 15 51 27" src="https://github.com/TakumaOnishi/Fish_Keyboard/assets/85474111/dccd976c-bd23-4e65-964b-2dbc74e567e4">  
部品は`1N4148W`で検索し`Basic Parts Only`にチェックを入れて出てくる1N4148WS（SOD-323）を選択する。  
<img width="1512" alt="Screenshot 2023-11-15 at 15 57 54" src="https://github.com/TakumaOnishi/Fish_Keyboard/assets/85474111/ac938035-5454-48d8-a1d3-0ef93fc692d2">  
部品が正しく配置されているのを確認する。  
<img width="1512" alt="Screenshot 2023-11-13 at 02 46 35" src="https://github.com/TakumaOnishi/Fish_Keyboard/assets/85474111/46be09d8-5b88-4974-8d3d-54896eff3bca">  
注文後しばらくするとParts Placementの確認がくるので承認する。  
それ以外の確認がメール（英語）で来ることもあるので適宜対応する。  
  
参考：[JLCPCBの発注方法を解説するよ！／自作キーボード温泉街の歩き方](https://salicylic-acid3.hatenablog.com/entry/jlcpcb-order)  
