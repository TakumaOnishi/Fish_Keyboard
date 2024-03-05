PCBとはPrinted Circuit Boardつまり基板のこと。  
３種類あり、それぞれ業者に発注して作ってもらう。  
  
### left, right  
キースイッチを網羅して列と行でまとめ、マイコンのピンの直下に持ってくるための基板。  
  
### wing  
充電スイッチおよびリセットボタンとマイコンを繋げながらそれらの位置を固定するための基板。左右で同じものを裏返して使う。  
  
## 発注方法  
> 詳しくは[JLCPCBの発注方法を解説するよ！／自作キーボード温泉街の歩き方](https://salicylic-acid3.hatenablog.com/entry/jlcpcb-order)も参照。

[JLCPCB](https://jlcpcb.com/)にアクセスし、`Add gerber file`に発注したい基板のzipをぶちこむ。  
![Screenshot 2024-01-07 at 17 12 22](https://github.com/TakumaOnishi/Fish_Keyboard/assets/85474111/3b44aafb-64f2-4853-a7ff-4a1e95039d5f)  
既定値から変えるオプションは  
・`PCB Qty`：発注したい枚数  
・`PCB Thickness`：leftおよびrightは`0.6mm`、wingは`0.8mm`  
・`Surface Finish`：`LeadFree HASL`（RoHS規定のため）  
・`Confirm Production files` : `Yes`（確認しやすいファイル形式ではないが、見てるぞと言っておくとクオリティが上がる）  
wingの場合はこのまま進んでカートに保存する。  

leftおよびrightの場合は、さらにPCB Assenbly（部品の取り付けサーヴィス）にチェックを入れ、  
![Screenshot 2024-01-07 at 17 14 08](https://github.com/TakumaOnishi/Fish_Keyboard/assets/85474111/25c45f71-b0fe-4a56-999b-0b0c1b8b26cd)  
・`Confirm Parts Placement`：`Yes`  
とする（なぜかダイオードの座標がずれるため）。  
`Confirm`を押して続くウィザードに沿って`BOM.csv`および`left/right_CPL.csv`をぶちこむ。  
<img width="1415" alt="Screenshot 2024-01-08 at 00 10 30" src="https://github.com/TakumaOnishi/Fish_Keyboard/assets/85474111/e7c75bcb-eb1d-4467-a737-4afa057fb738">
1N4148WSダイオードが選択されていることを確認（できなければ検索して選択）して進み、  
![Screenshot 2024-01-07 at 18 05 53](https://github.com/TakumaOnishi/Fish_Keyboard/assets/85474111/99e8eb39-c904-4876-9f2e-335468825839)  
ダイオードが正しく配置されているのを確認する。  
![Screenshot 2024-01-07 at 18 16 49](https://github.com/TakumaOnishi/Fish_Keyboard/assets/85474111/b46e4f86-13d6-4764-8911-fd7f25858ca3)
金額確認画面で`Product Description`を`Keyboard`にし（税関で見られる）、カートに保存する。  

配送方法・支払い方法を指定して注文を完了する。複数種類をまとめて注文することもできる。  
注文後、ファイルや部品位置の確認がメール（英語）で来るので適宜対応する。  
