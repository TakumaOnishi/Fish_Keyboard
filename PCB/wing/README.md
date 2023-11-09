マイコンの充電とリセットを手配しながら、各部品を固定するための基板。  
  
## イメージ  
・右手側（表から）  
![Screenshot 2023-11-09 at 18 26 47](https://github.com/TakumaOnishi/Fish_Keyboard/assets/85474111/e8acdb48-abfe-4d1b-93a5-4f6e2da6d501)  
・右手側（裏から）  
![Screenshot 2023-11-09 at 18 26 21](https://github.com/TakumaOnishi/Fish_Keyboard/assets/85474111/83434b8f-7f68-427b-b90e-ec0b530137a4)  
  
## 外形と回路図  
![Untitled1618](https://github.com/TakumaOnishi/Fish_Keyboard/assets/85474111/6453acae-083b-4925-aa84-6ae3fbcba595)  
・単一の基板を左右で裏返して使う。  
・上下は対称に見えるが、微妙に非対称（両翼の先端部分の外形）。紛らわしいので判別のためも兼ねて、裏と表にlogo_white.pngのシルクを刷る。  
・角丸長方形の穴はボディの柱（Xiao固定用）を通すためのものなので、フチに金属は不要。  
・外形のDXFは各スルーホールの外側もしくは内側の径を指定している（わかりにくくてすみません）：  
・プッシュ／トグルスイッチのスルーホールは*内径*0.8mm。  
・PHコネクターポストのスルーホールは*内径*1.0mm。  
・XiaoのGND/RSTランドのスルーホールは*外径*約1.22mm。  
・XiaoのBat+/-ランドは約1.27*約2.28mmの長方形の中に長穴。正円でも可だが、接着面はできるだけ増やしたいので。  
  
## 実装する部品  
・すべて手はんだ前提。  
  
### プッシュスイッチ（GB-25AV）  
![Screenshot 2023-11-09 at 17 39 41](https://github.com/TakumaOnishi/Fish_Keyboard/assets/85474111/e7ff294e-0e77-4ea7-9723-88ee753eb577)  
・製品ページ（データシートPDFあり）：https://www.nkkswitches.co.jp/product/detailed/GB-25AV.html  
・リセットボタン。Xiao裏のGNDとRSTをつなぐ。  
・PC-V端子形の２極双投のもの。  
  
### トグルスイッチ（G-22AV）  
<img width="1005" alt="Screenshot 2023-11-09 at 17 46 25" src="https://github.com/TakumaOnishi/Fish_Keyboard/assets/85474111/393c301d-4f19-4c50-bc32-aca985de820c">  
・製品ページ（データシートPDFあり）：https://www.nkkswitches.co.jp/product/detailed/G-22AV.html  
・電源スイッチ。バッテリーとXiao裏のBat+/-をつなぐ。  
・PC-V端子形の２極双投のもの。  
  
### PHコネクター ベース付ポスト（JSTの標準のタイプ）  
![Screenshot 2023-11-09 at 17 49 57](https://github.com/TakumaOnishi/Fish_Keyboard/assets/85474111/a5964623-3897-4d22-9848-39c01c0a4e70)  
・データシート：https://www.jst-mfg.com/product/pdf/jpn/PH.pdf?654bd0c151ce9  
・バッテリーの端子を嵌合して接続する。  
・これだけはフットプリントに対称性がないため、基板を左右で裏返して使うのに合わせて+/-が正しくなるような向き；おもて面なら上、裏面なら下にケーブルが出るように実装する。  
・↑の向きを間違えないよう、F面に上向きの、B面に下向きの輪郭シルクを描く（これ以外の部品シルクは不要）。  
  
### バッテリー（DTP502535）  
・製品ページ：https://www.sengoku.co.jp/mod/sgk_cart/detail.php?code=EEHD-4YZL  
  
### マイコン（Seeed Xiao nRF52840）  
・製品ページ：https://www.switch-science.com/products/8145  
