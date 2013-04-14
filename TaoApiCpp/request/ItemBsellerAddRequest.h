#ifndef ITEMBSELLERADDREQUEST_H
#define ITEMBSELLERADDREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/ItemBsellerAddResponse.h>

/**
 * TOP API: 淘宝助理提供的发布商城商品接口，在发布时 先查询是否有这个产品，有则将商品绑定到该产品上发布；如果没有这个产品，自动帮用户新建产品，再将商品绑定到该产品上发布。错误码参考taobao.product.add、taobao.product.img.upload、taobao.product.propimg.upload、taobao.item.add
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ItemBsellerAddRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getAfterSaleId() const
;  void setAfterSaleId (qlonglong afterSaleId);

 QString getApproveStatus() const
;  void setApproveStatus (QString approveStatus);

 qlonglong getAuctionPoint() const
;  void setAuctionPoint (qlonglong auctionPoint);

 QString getAutoFill() const
;  void setAutoFill (QString autoFill);

 bool getAutoRepost() const
;  void setAutoRepost (bool autoRepost);

 qlonglong getCid() const
;  void setCid (qlonglong cid);

 qlonglong getCodPostageId() const
;  void setCodPostageId (qlonglong codPostageId);

 QString getColorPropAndPicUrls() const
;  void setColorPropAndPicUrls (QString colorPropAndPicUrls);

 QString getDesc() const
;  void setDesc (QString desc);

 QString getEmsFee() const
;  void setEmsFee (QString emsFee);

 QString getExpressFee() const
;  void setExpressFee (QString expressFee);

 QString getFeatures() const
;  void setFeatures (QString features);

 QString getFreightPayer() const
;  void setFreightPayer (QString freightPayer);

 QString getGlobalStockType() const
;  void setGlobalStockType (QString globalStockType);

 bool getHasDiscount() const
;  void setHasDiscount (bool hasDiscount);

 bool getHasInvoice() const
;  void setHasInvoice (bool hasInvoice);

 bool getHasShowcase() const
;  void setHasShowcase (bool hasShowcase);

 bool getHasWarranty() const
;  void setHasWarranty (bool hasWarranty);

 QString getIncrement() const
;  void setIncrement (QString increment);

 qlonglong getInnerShopAuctionTemplateId() const
;  void setInnerShopAuctionTemplateId (qlonglong innerShopAuctionTemplateId);

 QString getInputPids() const
;  void setInputPids (QString inputPids);

 QString getInputStr() const
;  void setInputStr (QString inputStr);

 bool getIs3D() const
;  void setIs3D (bool is3D);

 bool getIsEx() const
;  void setIsEx (bool isEx);

 bool getIsLightningConsignment() const
;  void setIsLightningConsignment (bool isLightningConsignment);

 bool getIsTaobao() const
;  void setIsTaobao (bool isTaobao);

 bool getIsXinpin() const
;  void setIsXinpin (bool isXinpin);

 QString getItemSize() const
;  void setItemSize (QString itemSize);

 QString getItemSpecProp() const
;  void setItemSpecProp (QString itemSpecProp);

 QString getItemWeight() const
;  void setItemWeight (QString itemWeight);

 QString getLang() const
;  void setLang (QString lang);

 QDateTime getListTime() const
;  void setListTime (QDateTime listTime);

 QString getLocalityLifeChooseLogis() const
;  void setLocalityLifeChooseLogis (QString localityLifeChooseLogis);

 QString getLocalityLifeExpirydate() const
;  void setLocalityLifeExpirydate (QString localityLifeExpirydate);

 QString getLocalityLifeMerchant() const
;  void setLocalityLifeMerchant (QString localityLifeMerchant);

 QString getLocalityLifeNetworkId() const
;  void setLocalityLifeNetworkId (QString localityLifeNetworkId);

 qlonglong getLocalityLifeOnsaleAutoRefundRatio() const
;  void setLocalityLifeOnsaleAutoRefundRatio (qlonglong localityLifeOnsaleAutoRefundRatio);

 qlonglong getLocalityLifeRefundRatio() const
;  void setLocalityLifeRefundRatio (qlonglong localityLifeRefundRatio);

 QString getLocalityLifeVerification() const
;  void setLocalityLifeVerification (QString localityLifeVerification);

 QString getLocationCity() const
;  void setLocationCity (QString locationCity);

 QString getLocationState() const
;  void setLocationState (QString locationState);

 qlonglong getNum() const
;  void setNum (qlonglong num);

 QString getOuterId() const
;  void setOuterId (QString outerId);

 qlonglong getOuterShopAuctionTemplateId() const
;  void setOuterShopAuctionTemplateId (qlonglong outerShopAuctionTemplateId);

 QString getPicUrl() const
;  void setPicUrl (QString picUrl);

 QString getPostFee() const
;  void setPostFee (QString postFee);

 qlonglong getPostageId() const
;  void setPostageId (qlonglong postageId);

 QString getPrice() const
;  void setPrice (QString price);

 qlonglong getProductId() const
;  void setProductId (qlonglong productId);

 QString getPropertyAlias() const
;  void setPropertyAlias (QString propertyAlias);

 QString getProps() const
;  void setProps (QString props);

 QString getSecondKill() const
;  void setSecondKill (QString secondKill);

 bool getSellPromise() const
;  void setSellPromise (bool sellPromise);

 QString getSellerCids() const
;  void setSellerCids (QString sellerCids);

 QString getSkuOuterIds() const
;  void setSkuOuterIds (QString skuOuterIds);

 QString getSkuPrices() const
;  void setSkuPrices (QString skuPrices);

 QString getSkuProperties() const
;  void setSkuProperties (QString skuProperties);

 QString getSkuQuantities() const
;  void setSkuQuantities (QString skuQuantities);

 QString getSkuSpecIds() const
;  void setSkuSpecIds (QString skuSpecIds);

 QString getStuffStatus() const
;  void setStuffStatus (QString stuffStatus);

 QString getSubPicUrls() const
;  void setSubPicUrls (QString subPicUrls);

 qlonglong getSubStock() const
;  void setSubStock (qlonglong subStock);

 QString getTitle() const
;  void setTitle (QString title);

 QString getType() const
;  void setType (QString type);

 qlonglong getValidThru() const
;  void setValidThru (qlonglong validThru);

 qlonglong getWeight() const
;  void setWeight (qlonglong weight);


  virtual ItemBsellerAddResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 售后服务说明模板id
 **/
  qlonglong afterSaleId;

/**
 * @brief 商品上传后的状态。可选值:onsale(出售中),instock(仓库中);默认值:onsale
 **/
  QString approveStatus;

/**
 * @brief 商品的积分返点比例。如:5,表示:返点比例0.5%. 注意：返点比例必须是>0的整数，而且最大是90,即为9%.B商家在发布非虚拟商品时，返点必须是 5的倍数，即0.5%的倍数。其它是1的倍数，即0.1%的倍数
 **/
  qlonglong auctionPoint;

/**
 * @brief 代充商品类型。只有少数类目下的商品可以标记上此字段，具体哪些类目可以上传可以通过taobao.itemcat.features.get获得。在代充商品的类目下，不传表示不标记商品类型（交易搜索中就不能通过标记搜到相关的交易了）。可选类型：  
*no_mark(不做类型标记)  
*time_card(点卡软件代充)  
*fee_card(话费软件代充)
 **/
  QString autoFill;

/**
 * @brief 自动重发。可选值:true,false;默认值:false(不重发)
 **/
  bool autoRepost;

/**
 * @brief 叶子类目id
 **/
  qlonglong cid;

/**
 * @brief 货到付款运费模板ID
 **/
  qlonglong codPostageId;

/**
 * @brief 颜色销售属性和对应销售属性图片url列表，格式为"颜色属性pid,颜色属性值vid,颜色图片url"，多个颜色用分号分隔，例如：125,567,http://img05.daily.taobao.net/bao/uploaded/i5/T16.lbXl02XXXmYQgY_030226.jpg;566,578,http://img05.daily.taobao.net/bao/uploaded/i5/T1zphcXcVuXXbDdSva_122254.jpg;
 **/
  QString colorPropAndPicUrls;

/**
 * @brief 宝贝描述。字数要大于5个字符，小于25000个字符，受违禁词控制
 **/
  QString desc;

/**
 * @brief ems费用。取值范围:0-100000000;精确到2位小数;单位:元。如:25.07，表示:25元7分
 **/
  QString emsFee;

/**
 * @brief 快递费用。取值范围:0.01-10000.00;精确到2位小数;单位:元。如:15.07，表示:15元7分
 **/
  QString expressFee;

/**
 * @brief 宝贝特征值，格式为： 
【key1:value1;key2:value2;key3:value3;】，key和value用【:】分隔，key&value之间用【;】分隔，只有在Top支持的特征值才能保存到宝贝上，目前支持的Key列表为：mysize_tp
 **/
  QString features;

/**
 * @brief 运费承担方式。可选值:seller（卖家承担）,buyer(买家承担);默认值:seller。卖家承担不用设置邮费和postage_id.买家承担的时候，必填邮费和postage_id  
如果用户设置了运费模板会优先使用运费模板，否则要同步设置邮费（post_fee,express_fee,ems_fee
 **/
  QString freightPayer;

/**
 * @brief 针对全球购卖家的库存类型业务， 
有两种库存类型：现货和代购 
参数值为1时代表现货，值为2时代表代购 
如果传值为这两个值之外的值，会报错; 
如果不是全球购卖家，这两个值即使设置也不会处理
 **/
  QString globalStockType;

/**
 * @brief 支持会员打折。可选值:true,false;默认值:false(不打折)
 **/
  bool hasDiscount;

/**
 * @brief 是否有发票。可选值:true,false (商城卖家此字段必须为true);默认值:false(无发票)
 **/
  bool hasInvoice;

/**
 * @brief 橱窗推荐。可选值:true,false;默认值:false(不推荐)
 **/
  bool hasShowcase;

/**
 * @brief 是否有保修。可选值:true,false;默认值:false(不保修)
 **/
  bool hasWarranty;

/**
 * @brief 加价幅度。如果为0，代表系统代理幅度
 **/
  QString increment;

/**
 * @brief 用户的内店装修模板id。
 **/
  qlonglong innerShopAuctionTemplateId;

/**
 * @brief 用户自行输入的类目属性ID串。结构："pid1,pid2,pid3"，如："20000"（表示品牌） 注：通常一个类目下用户可输入的关键属性不超过1个。
 **/
  QString inputPids;

/**
 * @brief 用户自行输入的子属性名和属性值，结构:"父属性值;一级子属性名;一级子属性值;二级子属性名;自定义输入值,....",如：“耐克;耐克系列;科比系列;科比系列;2K5,Nike乔丹鞋;乔丹系列;乔丹鞋系列;乔丹鞋系列;json5”，多个自定义属性用','分割，input_str需要与input_pids一一对应，注：通常一个类目下用户可输入的关键属性不超过1个。所有属性别名加起来不能超过3999字节
 **/
  QString inputStr;

/**
 * @brief 是否是3D商品
 **/
  bool is3D;

/**
 * @brief 是否在外部网店显示
 **/
  bool isEx;

/**
 * @brief 实物闪电发货
 **/
  bool isLightningConsignment;

/**
 * @brief 是否在淘宝显示
 **/
  bool isTaobao;

/**
 * @brief 商品是否为新品。只有在当前类目开通新品,并且当前用户拥有该类目下发布新品权限时才能设置is_xinpin为true，否则设置true后会返回错误码:isv.invalid-permission:xinpin。同时只有一口价全新的宝贝才能设置为新品，否则会返回错误码：isv.invalid-parameter:xinpin。不设置该参数值或设置为false效果一致。
 **/
  bool isXinpin;

/**
 * @brief 表示商品的体积，如果需要使用按体积计费的运费模板，一定要设置这个值。该值的单位为立方米（m3），如果是其他单位，请转换成成立方米。 该值支持两种格式的设置：格式1：bulk:3,单位为立方米(m3),表示直接设置为商品的体积。格式2：length:10;breadth:10;height:10，单位为米（m）。体积和长宽高都支持小数类型。 在传入体积或长宽高时候，不能带单位。体积的单位默认为立方米（m3），长宽高的单位默认为米(m)
 **/
  QString itemSize;

/**
 * @brief 特定种类的商品约束，以key：value的形式传入，以分号间隔。如食品安全需要输入：food_security.prd_license_no：12345;food_security.design_code：444;...。这些key：value可参考taobao.item.add的对应输入参数。
 **/
  QString itemSpecProp;

/**
 * @brief 商品的重量，用于按重量计费的运费模板。注意：单位为kg。 只能传入数值类型（包含小数），不能带单位，单位默认为kg。
 **/
  QString itemWeight;

/**
 * @brief 商品文字的字符集。繁体传入"zh_HK"，简体传入"zh_CN"，不传默认为简体
 **/
  QString lang;

/**
 * @brief 定时上架时间。(时间格式：yyyy-MM-dd HH:mm:ss)
 **/
  QDateTime listTime;

/**
 * @brief 发布电子凭证宝贝时候表示是否使用邮寄 0: 代表不使用邮寄； 1：代表使用邮寄；如果不设置这个值，代表不使用邮寄
 **/
  QString localityLifeChooseLogis;

/**
 * @brief 本地生活电子交易凭证业务，目前此字段只涉及到的信息为有效期; 
如果有效期为起止日期类型，此值为2012-08-06,2012-08-16 
如果有效期为【购买成功日 至】类型则格式为2012-08-16 
如果有效期为天数类型则格式为15
 **/
  QString localityLifeExpirydate;

/**
 * @brief 码商信息，格式为 码商id:nick
 **/
  QString localityLifeMerchant;

/**
 * @brief 网点ID
 **/
  QString localityLifeNetworkId;

/**
 * @brief 电子凭证售中自动退款比例，百分比%前的数字，介于1-100之间的整数
 **/
  qlonglong localityLifeOnsaleAutoRefundRatio;

/**
 * @brief 退款比例， 
百分比%前的数字,1-100的正整数值
 **/
  qlonglong localityLifeRefundRatio;

/**
 * @brief 核销打款  
1代表核销打款 0代表非核销打款
 **/
  QString localityLifeVerification;

/**
 * @brief 所在地城市。如杭州 。具体可以用taobao.areas.get取到
 **/
  QString locationCity;

/**
 * @brief 所在地省份。如浙江，具体可以用taobao.areas.get取到
 **/
  QString locationState;

/**
 * @brief 商品数量，取值范围:0-999999的整数。且需要等于Sku所有数量的和
 **/
  qlonglong num;

/**
 * @brief 商家编码
 **/
  QString outerId;

/**
 * @brief 用户的外店装修模板id
 **/
  qlonglong outerShopAuctionTemplateId;

/**
 * @brief 商品主图在图片空间的完整url。该图片必须属于当前用户。
 **/
  QString picUrl;

/**
 * @brief 平邮费用。取值范围:0.01-10000.00;精确到2位小数;单位:元。如:5.07，表示:5元7分. 注:post_fee,express_fee,ems_fee需要一起填写
 **/
  QString postFee;

/**
 * @brief 宝贝所属的运费模板ID。取值范围：整数且必须是该卖家的运费模板的ID（可通过taobao.postages.get获得当前会话用户的所有邮费模板）
 **/
  qlonglong postageId;

/**
 * @brief 商品价格。取值范围:0-100000000;精确到2位小数;单位:元。如:200.07，表示:200元7分。需要在正确的价格区间内。
 **/
  QString price;

/**
 * @brief 商品所属的产品ID(B商家发布商品需要用)
 **/
  qlonglong productId;

/**
 * @brief 属性值别名。如pid:vid:别名;pid1:vid1:别名1 ，其中：pid是属性id vid是属性值id。总长度不超过511字节
 **/
  QString propertyAlias;

/**
 * @brief 商品属性列表。格式:pid:vid;pid:vid。属性的pid调用taobao.itemprops.get取得，属性值的vid用taobao.itempropvalues.get取得vid。 如果该类目下面没有属性，可以不用填写。如果有属性，必选属性必填，其他非必选属性可以选择不填写.属性不能超过35对。所有属性加起来包括分割符不能超过549字节，单个属性没有限制。 如果有属性是可输入的话，则用字段input_str填入属性的值
 **/
  QString props;

/**
 * @brief 秒杀商品类型。暂时不能使用。打上秒杀标记的商品，用户只能下架并不能再上架，其他任何编辑或删除操作都不能进行。如果用户想取消秒杀标记，需要联系小二进行操作。如果秒杀结束需要自由编辑请联系活动负责人（小二）去掉秒杀标记。可选类型 
web_only(只能通过web网络秒杀) 
wap_only(只能通过wap网络秒杀) 
web_and_wap(既能通过web秒杀也能通过wap秒杀)
 **/
  QString secondKill;

/**
 * @brief 是否承诺退换货服务!虚拟商品无须设置此项!
 **/
  bool sellPromise;

/**
 * @brief 商品所属的店铺类目列表。按逗号分隔。结构:",cid1,cid2,...,"，如果店铺类目存在二级类目，必须传入子类目cids。
 **/
  QString sellerCids;

/**
 * @brief sku_properties, sku_quantities, sku_prices, sku_outer_ids在输入数据时要一一对应，如果没有sku_outer_ids可写成：“, ,”
 **/
  QString skuOuterIds;

/**
 * @brief Sku的价格串，结构如：10.00,5.00,… 精确到2位小数;单位:元。如:200.07，表示:200元7分
 **/
  QString skuPrices;

/**
 * @brief 更新的Sku的属性串，调用taobao.itemprops.get获取类目属性，如果属性是销售属性，再用taobao.itempropvalues.get取得vid。格式:pid:vid;pid:vid,多个sku之间用逗号分隔。该字段内的销售属性(自定义的除外)也需要在props字段填写 . 规则：如果该SKU存在旧商品，则修改；否则新增Sku。如果更新时有对Sku进行操作，则Sku的properties一定要传入。如果存在自定义销售属性，则格式为pid:vid;pid2:vid2;$pText:vText，其中$pText:vText为自定义属性。限制：其中$pText的’$’前缀不能少，且pText和vText文本中不可以存在 冒号:和分号;以及逗号
 **/
  QString skuProperties;

/**
 * @brief Sku的数量串，结构如：num1,num2,num3 如：2,3
 **/
  QString skuQuantities;

/**
 * @brief 产品的规格信息。
 **/
  QString skuSpecIds;

/**
 * @brief 新旧程度。可选值：new(新)，second(二手)，unused(闲置)。B商家不能发布二手商品。 
如果是二手商品，特定类目下属性里面必填新旧成色属性
 **/
  QString stuffStatus;

/**
 * @brief 1~4个淘宝图片空间的图片url列表，“,”分隔，做为商品的副图
 **/
  QString subPicUrls;

/**
 * @brief 商品是否支持拍下减库存:1支持;2取消支持;0(默认)不更改
 **/
  qlonglong subStock;

/**
 * @brief 宝贝标题。不能超过60字符，受违禁词控制
 **/
  QString title;

/**
 * @brief 发布类型。可选值:fixed(一口价),auction(拍卖)。B商家不能发布拍卖商品，而且拍卖商品是没有SKU的
 **/
  QString type;

/**
 * @brief 有效期。可选值:7,14;单位:天;默认值:14
 **/
  qlonglong validThru;

/**
 * @brief 商品的重量(商超卖家专用字段)
 **/
  qlonglong weight;

};

#endif  /* ITEMBSELLERADDREQUEST_H */
