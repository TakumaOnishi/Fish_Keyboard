## スイッチ基板（fpc_outline）  
 ![Screenshot 2023-08-12 at 17 28 39](https://github.com/TakumaOnishi/Fish_Keyboard/assets/85474111/33be3463-8fed-4396-93c2-962860b22bce)  
  
キースイッチに張り巡らせるフレキシブル基板。
  
### 接続する部品
#### キースイッチ * 16  
・製品：https://nuphy.com/collections/switches/products/nuphy-daisy-l48-switches  
・データシート：https://cdn.shopify.com/s/files/1/0268/7297/1373/files/gateron-brown-spec-sheet.pdf?v=1657696307  
  
#### FPCコネクター  
・製品：[https://www.hirose.com/product/series/FH12  ](https://www.hirose.com/ja/product/p/CL0586-0553-7-55)  
・0.5mmピッチの18極を想定し、挿入端部の幅は9.57mm。  
  
### 回路  
それぞれのキースイッチの２本の足（指向性は無い）のうち、片方はすべてGNDに繋ぎ、もう片方は固有の16ポートに繋ぐ。ダイオードは不要。  
どれをどのポートに繋げるかは配線の都合で決めてOK（ファームウェアで指定を書き換えられる）。  
  
### 備考  
・キースイッチのフットプリントを反転して重ね、左右リバーシヴルにした。マイコン基板への接続部分が裏表対称にできれば、左右で同一の基板を裏返して使える。  
・キースイッチの丸い穴の座標は  
人差し指拡張列 (-38.7885 14.317) (-37.5219 -3.84615) 傾き-4°  
人差し指列 (-19.5388 21.6432) (-18.9149 3.38584) (-18.265 -15.243) 傾き-2°  
中指列 (-0.013647 24.0367) (-0.013647 5.76364) (-0.013647 -12.7566) 傾き0°  
薬指列 (19.4004 21.5863) (18.7617 3.2909) (18.1121 -15.2573) 傾き2°  
小指列 (37.6927 0.5394) (36.3778 -18.2000) 傾き4°  
小指拡張列 (56.2097 -3.40367) 傾き6°  
親指列 (-9.2076 -42.6144) (8.57447 -42.6144) 傾き-90°  


## マイコン基板（pcb_outline）  
<img width="901" alt="Screenshot 2023-08-11 at 15 47 32" src="https://github.com/TakumaOnishi/Fish_Keyboard/assets/85474111/8387a141-28b0-47f9-b817-de80e4a426e2">  

BLE Micro Pro（以下BMP）のクローン基板。1.6mm厚。  
  
### 実装する部品  
#### 電源スイッチ（右上）   
・CF-LD-1DC4-AW2：https://www.nidec-components.com/j/catalog/switch/cf-ld.pdf  
・基板の外に1.0mmほど飛び出していてほしい。  
#### PHコネクター2P（右中央）  
・バッテリー（https://www.sengoku.co.jp/mod/sgk_cart/detail.php?code=EEHD-4YZL ）から電源を取る。  
・製品例：https://akizukidenshi.com/catalog/g/gC-12633/  
・横向きタイプを想定。スルーホール実装が望ましい。場所はずらせるかも。 
#### FPCコネクター（右下）  
・スイッチ基板から入力を取る。  
・製品：[https://www.hirose.com/product/series/FH12](https://www.hirose.com/ja/product/p/CL0586-0553-7-55) 0.5mmピッチの18極  
・場所はずらせない。   
#### USB-Cコネクター（左）  
・充電、ファームウェア書き換え、有線使用時にPCと繋ぐ。  
・製品例：[https://www.jae.com/connector-special/dx07_usb_type-c/  ](https://www.jae.com/connectors/series/detail/product/id=91780)  
・オンボードタイプを想定。こちらもスルーホール実装が望ましい。  
・場所は上下にはずらせない。基板の外に1.0mm程度飛び出していてほしい。  
・基板の右端から1.7mmの壁があっても奥まで挿さるように浅いレセプタクルにする。  

#### その他（BL654など必要な部品）  
・BMPをまるパクりする。  
・インジケータLED（赤色）をつけたい！ピンはちょうど１つ余ってるはず：https://sekigon-gonnoc.github.io/BLE-Micro-Pro/#/design_guide?id=%e3%82%a4%e3%83%b3%e3%82%b8%e3%82%b1%e3%83%bc%e3%82%bfled  
  
### 回路  
・BMPの回路図：https://github.com/sekigon-gonnoc/BLE-Micro-Pro/blob/master/schematic.pdf  
・これに加えて、USBからバッテリーを充電する（満タンになったらやめる）回路が必要  
・充電中はインジケータLEDが点灯して満タンになったら消えると最高  
  
### 備考  
・左右対称で２通り必要…。  
・組み立て時は裏返して（表面実装パーツがキースイッチ側を向くように）おさかなの頭にセットする。裏面には突起NG。  
・上下のフチとFPCコネクタの右には突起NG。
・表面実装パーツの高さはマックス5mm、できるだけ抑える。  
・表面実装は業者に任せる気マンマン。  
・BMPを使った設計のガイド：https://sekigon-gonnoc.github.io/BLE-Micro-Pro/#/design_guide  
・よりフレンドリーなBMPの入門記事：https://salicylic-acid3.hatenablog.com/entry/BMP-Introduction  
  
## 取り付けイメージ  
<img width="1220" alt="Screenshot 2023-08-14 at 18 43 50" src="https://github.com/TakumaOnishi/Fish_Keyboard/assets/85474111/949306a0-f7c4-40ef-88f7-af72ec842e45">  
<img width="1110" alt="Screenshot 2023-08-14 at 18 44 39" src="https://github.com/TakumaOnishi/Fish_Keyboard/assets/85474111/a10e6e37-c957-4066-9822-542b284540cc">  
<img width="940" alt="Screenshot 2023-08-14 at 18 45 49" src="https://github.com/TakumaOnishi/Fish_Keyboard/assets/85474111/23a7fef1-3cb1-4de2-9138-29a119d9abe6">  
<img width="1238" alt="Screenshot 2023-08-14 at 18 46 32" src="https://github.com/TakumaOnishi/Fish_Keyboard/assets/85474111/cb671bd9-9682-41a4-a5a7-f4c100defc43">  
