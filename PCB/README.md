## スイッチ基板（fpc_outline）  
<img width="917" alt="Screenshot 2023-07-23 at 03 40 38" src="https://github.com/TakumaOnishi/Fish_Keyboard/assets/85474111/7b973346-4bbb-49c7-a5b8-fd64c269c274">  
  
キースイッチに張り巡らせるフレキシブル基板。
  
### 接続する部品
#### キースイッチ * 16  
・製品：https://nuphy.com/collections/switches/products/nuphy-daisy-l48-switches  
・データシート：https://cdn.shopify.com/s/files/1/0268/7297/1373/files/gateron-brown-spec-sheet.pdf?v=1657696307  
  
#### FPCコネクター  
・製品例：https://www.hirose.com/product/series/FH12  
・上記から0.5mmピッチ下接点標準タイプの17極を想定し、挿入部分の幅は9mmとした（カタログp13を参照）。
  
### 回路  
それぞれのキースイッチの２本の足（指向性は無い）のうち、片方はすべてGNDに繋ぎ、もう片方は固有の16ポートに繋ぐ。ダイオードは不要。  
どれをどのポートに繋げるかは配線の都合で決めてOK（ファームウェアで指定を書き換えられる）。  
  
### 備考  
・キースイッチのフットプリントを反転して重ね、左右リバーシヴルにした。マイコン基板への接続部分が裏表対称にできれば、左右で同一の基板を裏返して使える。  
・キースイッチのピンの穴は角丸長方形ではなくその外接円でもいいが、上がキツキツになる部分がありそう。  
・キースイッチの丸い穴の座標は  
人差し指拡張列 (-38.7885 14.317) (-37.5219 -3.84615) 傾き-4°  
人差し指列 (-19.5388 21.6432) (-18.9149 3.38584) (-18.265 -15.243) 傾き-2°  
中指列 (-0.013647 24.0367) (-0.013647 5.76364) (-0.013647 -12.7566) 傾き0°  
薬指列 (19.4879 21.6234) (18.8492 3.32806) (18.1996 -15.2944) 傾き2°  
小指列 (37.9815 0.569991) (36.6666 -18.2303) 傾き4°  
小指拡張列 (56.4004 -3.36312) 傾き6°  
親指列 (-9.1709 -39.6282) (8.53777 -39.6282) 傾き-90°  


## マイコン基板（pcb_outline）  
<img width="1037" alt="Screenshot 2023-07-19 at 20 21 50" src="https://github.com/TakumaOnishi/Fish_Keyboard/assets/85474111/63464950-c794-4cb4-9443-5ef591d48814">  
  
BLE Micro Pro（以下BMP）のクローン基板。1.6mm厚を想定。  
  
### 実装する部品  
#### FPCコネクター（右上）  
・スイッチ基板から入力を取る。  
・製品例（前述の通り）：https://www.hirose.com/product/series/FH12 0.5mmピッチの17極  
・場所はずらせない。  

#### PHコネクター2P（右下）
・バッテリー（https://www.sengoku.co.jp/mod/sgk_cart/detail.php?code=EEHD-4YZL ）から電源を取る。  
・製品例：https://akizukidenshi.com/catalog/g/gC-12633/  
・横向きタイプを想定。スルーホール実装が望ましい。場所はずらせるかも。  

#### USB-Cコネクター（左）  
・充電、ファームウェア書き換え、有線使用時にPCと繋ぐ。  
・製品例：https://www.jae.com/connector-special/dx07_usb_type-c/  
・オンボードタイプを想定。こちらもスルーホール実装が望ましい。  
・場所は上下にはずらせない。基板の外に1.0〜1.7mm飛び出していて欲しい。  
・基板の右端から1.7mmの壁があってピッタリ奥まで挿さるとベストだが、とりあえず奥まで挿さればOK。  

#### その他（BL654など必要な部品）  
・BMPをまるパクりする。  
・インジケータLED（赤色）をつけたい！ピンはちょうど１つ余ってるはず：https://sekigon-gonnoc.github.io/BLE-Micro-Pro/#/design_guide?id=%e3%82%a4%e3%83%b3%e3%82%b8%e3%82%b1%e3%83%bc%e3%82%bfled  
  
### 回路  
・BMPの回路図：https://github.com/sekigon-gonnoc/BLE-Micro-Pro/blob/master/schematic.pdf  
・これに加えて、USBからバッテリーを充電する（満タンになったらやめる）回路をお願いします！！  
  
### 備考  
・左右対称で２通り必要…。  
・BMPのファームウェアにスリープ機能が搭載されているので、電源スイッチは実装しないことにした。
・組み立て時は裏返して（表面実装パーツがキースイッチ側を向くように）おさかなの頭にセットする。裏面には突起NG。  
・曲線部分のフチから1.3mmは突起NG（ボディに置く部分なので）。  
・表面実装パーツの高さは4mm以下ぐらいならOK（PHコネクターはまぁ…この位置なら…）。  
・パーツの実装は工場（？）に任せる気マンマン。  
・BMPを使った設計のガイド：https://sekigon-gonnoc.github.io/BLE-Micro-Pro/#/design_guide  
・よりフレンドリーなBMPの入門記事：https://salicylic-acid3.hatenablog.com/entry/BMP-Introduction  

## 取り付けイメージ  
<img width="1146" alt="Screenshot 2023-07-20 at 04 00 43" src="https://github.com/TakumaOnishi/Fish_Keyboard/assets/85474111/0910fb9d-f539-488b-8d93-89168712804d">  
すべて左手機。ボディのモデルが干渉してる部分はこれから直す。  
<img width="851" alt="Screenshot 2023-07-20 at 03 59 29" src="https://github.com/TakumaOnishi/Fish_Keyboard/assets/85474111/95314de7-a9c7-4fa3-b6da-47e6e09e978c">   
<img width="1181" alt="Screenshot 2023-07-20 at 04 03 24" src="https://github.com/TakumaOnishi/Fish_Keyboard/assets/85474111/b6a824fd-3032-4148-ab1c-5baaab7aebae">  
<img width="1052" alt="Screenshot 2023-07-20 at 04 04 25" src="https://github.com/TakumaOnishi/Fish_Keyboard/assets/85474111/94e8150a-f0fd-459f-a773-2923a59c8962">  

