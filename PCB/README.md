# 取り付ける部品（個数は左右それぞれ）  
  
キースイッチ * 16  
・イメージ：https://nuphy.com/collections/switches/products/nuphy-daisy-l48-switches  
・データシート：https://cdn.shopify.com/s/files/1/0268/7297/1373/files/gateron-brown-spec-sheet.pdf?v=1657696307  
  
Pro Micro * 1 （USB-C 互換品）  
・イメージ：https://ja.aliexpress.com/item/32888212119.html?spm=a2g0o.productlist.main.3.5997645c4fdSNw&algo_pvid=b6128d1c-3b50-46cb-a4d1-16125c1211ee&algo_exp_id=b6128d1c-3b50-46cb-a4d1-16125c1211ee-1&pdp_npi=3%40dis%21JPY%21759.0%21615.0%21%21%21%21%21%402122443916849231700893088d0790%2112000027223441066%21sea%21JP%210&curPageLogUid=WyMhR81mQnpv  
  
TRRSジャック * 1  
・イメージ・データシート：https://ja.aliexpress.com/item/33029465106.html?spm=a2g0o.productlist.main.1.6718343e2hWHWy&algo_pvid=6fda5ebd-945e-46c2-ba71-f376dea32626&algo_exp_id=6fda5ebd-945e-46c2-ba71-f376dea32626-0&pdp_npi=3%40dis%21JPY%21115.0%21110.0%21%21%21%21%21%40212244c416851935148066302d073c%2167273462020%21sea%21JP%210&curPageLogUid=elfdcCsY8ndP  
  
  
  
# 回路
  
![Untitled1555_20230528045322](https://github.com/TakumaOnishi/Fish_Keyboard/assets/85474111/5a9e19e6-e618-4dfa-b4fa-3ec3d8560fc1)
![Untitled1556_20230528045659](https://github.com/TakumaOnishi/Fish_Keyboard/assets/85474111/e5dc37f2-2ace-46e6-8394-7f824f31be7e)  
16個のキースイッチにはそれぞれ、指向性のない２本の足があります。片方はすべてGNDに繋ぎ、もう片方はPro Microの18個のポートのうち固有の16個に繋ぎます。  
どれをどれに繋げるかはファームウェア上で指定を書き換えられるので、配線の都合で変えてもいいです。左右違ってもいいです。  

TRRSジャックは左右通信に使います。両側のPro Microの  
1.GND  
2.VCC  
3.PD1（余る２ポートのうちひとつ、左右で同じ番号のものであればこちらも変えてよい）  
どうしをTRRSケーブルを通して繋ぎます。TRRSジャックの穴もひとつ余ります（３極のプラグでも動くようにしたいが、一番外側の穴を捨てればいいか？）。 
  
・Pro Microのピン配置：https://cdn.sparkfun.com/datasheets/Dev/Arduino/Boards/ProMicro16MHzv1.pdf  
・左右通信のファームウェア仕様書：https://docs.qmk.fm/#/feature_split_keyboard?id=split-keyboard  
  
  
  
# その他
  
・親指の２キーは組み立て時にハンダゴテが入らなさそうなので、独立のPCBは作らず、直付けした導線をPCB下側の４穴に引っ張ってくることにしました。 
・Pro Microはスルーホールでいいかなと思いました。裏側に出たピンの足って切れますよね？付属のピンヘッダーがもったいない気がして。。。  
・穴の寸法は内径です。キースイッチとTRRSジャックの真ん中の丸い穴は内側に金属いらないです。  
・キースイッチとTRRSジャックの足およびPro Microのピンが左右対称ではないので、左右別で作ってほしいです。  
・組み立て時にわかりやすいように、表と裏で色を変えるか、表に「left」「right」などと書いてほしいです。  
<img width="948" alt="Screenshot 2023-05-28 at 03 25 27" src="https://github.com/TakumaOnishi/Fish_Keyboard/assets/85474111/a2b0a517-2ecc-4a35-ac8d-9f09f39d9623">  
・Z軸正の領域から見える面が組み立て時の表です。  
・組み立ての段取りは  
1. PCBの表側にあらかじめTRRSジャックとPro Micro用ピンヘッダーをはんだ付け  
2. 裏からキースイッチを嵌めたボディに入れ込んで、スイッチの足とはんだ付け  
3. ピンヘッダーにPro Microを裏向きではんだ付け  
を想定しています。  
・外形は変えられるところと変えられないところがあります。調整したいところがあったら教えてください。  
