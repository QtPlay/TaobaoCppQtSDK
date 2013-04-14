#ifndef ITEMUPDATEREQUEST_H
#define ITEMUPDATEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/ItemUpdateResponse.h>

/**
 * TOP API: 根据传入的num_iid更新对应的商品的数据  
传入的num_iid所对应的商品必须属于当前会话的用户  
商品的属性和sku的属性有包含的关系，商品的价格要位于sku的价格区间之中（例如，sku价格有5元、10元两种，那么商品的价格就需要大于等于5元，小于等于10元，否则更新商品会失败）  
商品的类目和商品的价格、sku的价格都有一定的相关性（具体的关系要通过类目属性查询接口获得）  
当关键属性值更新为“其他”的时候，需要输入input_pids和input_str商品才能更新成功。该接口不支持产品属性修改。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ItemUpdateRequest : public TaoRequest
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

 qlonglong getCid() const
;  void setCid (qlonglong cid);

 qlonglong getCodPostageId() const
;  void setCodPostageId (qlonglong codPostageId);

 QString getDesc() const
;  void setDesc (QString desc);

 QString getEmptyFields() const
;  void setEmptyFields (QString emptyFields);

 QString getEmsFee() const
;  void setEmsFee (QString emsFee);

 QString getExpressFee() const
;  void setExpressFee (QString expressFee);

 QString getFoodSecurityContact() const
;  void setFoodSecurityContact (QString foodSecurityContact);

 QString getFoodSecurityDesignCode() const
;  void setFoodSecurityDesignCode (QString foodSecurityDesignCode);

 QString getFoodSecurityFactory() const
;  void setFoodSecurityFactory (QString foodSecurityFactory);

 QString getFoodSecurityFactorySite() const
;  void setFoodSecurityFactorySite (QString foodSecurityFactorySite);

 QString getFoodSecurityFoodAdditive() const
;  void setFoodSecurityFoodAdditive (QString foodSecurityFoodAdditive);

 QString getFoodSecurityMix() const
;  void setFoodSecurityMix (QString foodSecurityMix);

 QString getFoodSecurityPeriod() const
;  void setFoodSecurityPeriod (QString foodSecurityPeriod);

 QString getFoodSecurityPlanStorage() const
;  void setFoodSecurityPlanStorage (QString foodSecurityPlanStorage);

 QString getFoodSecurityPrdLicenseNo() const
;  void setFoodSecurityPrdLicenseNo (QString foodSecurityPrdLicenseNo);

 QString getFoodSecurityProductDateEnd() const
;  void setFoodSecurityProductDateEnd (QString foodSecurityProductDateEnd);

 QString getFoodSecurityProductDateStart() const
;  void setFoodSecurityProductDateStart (QString foodSecurityProductDateStart);

 QString getFoodSecurityStockDateEnd() const
;  void setFoodSecurityStockDateEnd (QString foodSecurityStockDateEnd);

 QString getFoodSecurityStockDateStart() const
;  void setFoodSecurityStockDateStart (QString foodSecurityStockDateStart);

 QString getFoodSecuritySupplier() const
;  void setFoodSecuritySupplier (QString foodSecuritySupplier);

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

 FileItem getImage() const
;  void setImage (FileItem image);

 QString getIncrement() const
;  void setIncrement (QString increment);

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

 bool getIsReplaceSku() const
;  void setIsReplaceSku (bool isReplaceSku);

 bool getIsTaobao() const
;  void setIsTaobao (bool isTaobao);

 bool getIsXinpin() const
;  void setIsXinpin (bool isXinpin);

 QString getItemSize() const
;  void setItemSize (QString itemSize);

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

 qlonglong getNumIid() const
;  void setNumIid (qlonglong numIid);

 QString getOuterId() const
;  void setOuterId (QString outerId);

 qlonglong getPaimaiInfoDeposit() const
;  void setPaimaiInfoDeposit (qlonglong paimaiInfoDeposit);

 qlonglong getPaimaiInfoInterval() const
;  void setPaimaiInfoInterval (qlonglong paimaiInfoInterval);

 qlonglong getPaimaiInfoMode() const
;  void setPaimaiInfoMode (qlonglong paimaiInfoMode);

 QString getPaimaiInfoReserve() const
;  void setPaimaiInfoReserve (QString paimaiInfoReserve);

 qlonglong getPaimaiInfoValidHour() const
;  void setPaimaiInfoValidHour (qlonglong paimaiInfoValidHour);

 qlonglong getPaimaiInfoValidMinute() const
;  void setPaimaiInfoValidMinute (qlonglong paimaiInfoValidMinute);

 QString getPicPath() const
;  void setPicPath (QString picPath);

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

 QString getScenicTicketBookCost() const
;  void setScenicTicketBookCost (QString scenicTicketBookCost);

 qlonglong getScenicTicketPayWay() const
;  void setScenicTicketPayWay (qlonglong scenicTicketPayWay);

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

 QString getStuffStatus() const
;  void setStuffStatus (QString stuffStatus);

 qlonglong getSubStock() const
;  void setSubStock (qlonglong subStock);

 QString getTitle() const
;  void setTitle (QString title);

 qlonglong getValidThru() const
;  void setValidThru (qlonglong validThru);

 qlonglong getWeight() const
;  void setWeight (qlonglong weight);


  virtual ItemUpdateResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 售后服务说明模板id
 **/
  qlonglong afterSaleId;

/**
 * @brief 商品上传后的状态。可选值:onsale（出售中）,instock（库中），如果同时更新商品状态为出售中及list_time为将来的时间，则商品还是处于定时上架的状态, 此时item.is_timing为true
 **/
  QString approveStatus;

/**
 * @brief 商品的积分返点比例。如：5 表示返点比例0.5%. 注意：返点比例必须是>0的整数，而且最大是90,即为9%.B商家在发布非虚拟商品时，返点必须是 5的倍数，即0.5%的倍数。其它是1的倍数，即0.1%的倍数。无名良品商家发布商品时，复用该字段记录积分宝返点比例，返点必须是对应类目的返点步长的整数倍，默认是5，即0.5%。注意此时该字段值依旧必须是>0的整数，注意此时该字段值依旧必须是>0的整数，最高值不超过500，即50%
 **/
  qlonglong auctionPoint;

/**
 * @brief 代充商品类型。只有少数类目下的商品可以标记上此字段，具体哪些类目可以上传可以通过taobao.itemcat.features.get获得。在代充商品的类目下，不传表示不标记商品类型（交易搜索中就不能通过标记搜到相关的交易了）。可选类型：  
no_mark(不做类型标记)  
time_card(点卡软件代充)  
fee_card(话费软件代充)
 **/
  QString autoFill;

/**
 * @brief 叶子类目id
 **/
  qlonglong cid;

/**
 * @brief 货到付款运费模板ID
 **/
  qlonglong codPostageId;

/**
 * @brief 商品描述. 字数要大于5个字符，小于25000个字符 ，受违禁词控制
 **/
  QString desc;

/**
 * @brief 支持宝贝信息的删除,如需删除对应的食品安全信息中的储藏方法、保质期， 则应该设置此参数的值为：food_security.plan_storage,food_security.period; 各个参数的名称之间用【,】分割, 如果对应的参数有设置过值，即使在这个列表中，也不会被删除; 目前支持此功能的宝贝信息如下：食品安全信息所有字段、电子交易凭证字段（locality_life，locality_life.verification，locality_life.refund_ratio，locality_life.network_id ，locality_life.onsale_auto_refund_ratio）
 **/
  QString emptyFields;

/**
 * @brief ems费用。取值范围:0.01-999.00;精确到2位小数;单位:元。如:25.07，表示:25元7分
 **/
  QString emsFee;

/**
 * @brief 快递费用。取值范围:0.01-999.00;精确到2位小数;单位:元。如:15.07，表示:15元7分
 **/
  QString expressFee;

/**
 * @brief 厂家联系方式
 **/
  QString foodSecurityContact;

/**
 * @brief 产品标准号
 **/
  QString foodSecurityDesignCode;

/**
 * @brief 厂名
 **/
  QString foodSecurityFactory;

/**
 * @brief 厂址
 **/
  QString foodSecurityFactorySite;

/**
 * @brief 食品添加剂
 **/
  QString foodSecurityFoodAdditive;

/**
 * @brief 配料表
 **/
  QString foodSecurityMix;

/**
 * @brief 保质期
 **/
  QString foodSecurityPeriod;

/**
 * @brief 储藏方法
 **/
  QString foodSecurityPlanStorage;

/**
 * @brief 生产许可证号
 **/
  QString foodSecurityPrdLicenseNo;

/**
 * @brief 生产结束日期,格式必须为yyyy-MM-dd
 **/
  QString foodSecurityProductDateEnd;

/**
 * @brief 生产开始日期，格式必须为yyyy-MM-dd
 **/
  QString foodSecurityProductDateStart;

/**
 * @brief 进货结束日期，要在生产日期之后，格式必须为yyyy-MM-dd
 **/
  QString foodSecurityStockDateEnd;

/**
 * @brief 进货开始日期，要在生产日期之后，格式必须为yyyy-MM-dd
 **/
  QString foodSecurityStockDateStart;

/**
 * @brief 供货商
 **/
  QString foodSecuritySupplier;

/**
 * @brief 运费承担方式。运费承担方式。可选值:seller（卖家承担）,buyer(买家承担);
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
 * @brief 支持会员打折。可选值:true,false;
 **/
  bool hasDiscount;

/**
 * @brief 是否有发票。可选值:true,false (商城卖家此字段必须为true)
 **/
  bool hasInvoice;

/**
 * @brief 橱窗推荐。可选值:true,false;
 **/
  bool hasShowcase;

/**
 * @brief 是否有保修。可选值:true,false;
 **/
  bool hasWarranty;

/**
 * @brief 商品图片。类型:JPG,GIF;最大长度:500k
 **/
  FileItem image;

/**
 * @brief 加价(降价)幅度。如果为0，代表系统代理幅度。对于增价拍和荷兰拍来说是加价幅度，对于降价拍来说是降价幅度。
 **/
  QString increment;

/**
 * @brief 用户自行输入的类目属性ID串，结构："pid1,pid2,pid3"，如："20000"（表示品牌） 注：通常一个类目下用户可输入的关键属性不超过1个。
 **/
  QString inputPids;

/**
 * @brief 用户自行输入的子属性名和属性值，结构:"父属性值;一级子属性名;一级子属性值;二级子属性名;自定义输入值,....",如：“耐克;耐克系列;科比系列;科比系列;2K5,Nike乔丹鞋;乔丹系列;乔丹鞋系列;乔丹鞋系列;json5”，多个自定义属性用','分割，input_str需要与input_pids一一对应，注：通常一个类目下用户可输入的关键属性不超过1个。所有属性别名加起来不能超过3999字节。此处不可以使用“其他”、“其它”和“其她”这三个词。
 **/
  QString inputStr;

/**
 * @brief 是否是3D
 **/
  bool is3D;

/**
 * @brief 是否在外店显示
 **/
  bool isEx;

/**
 * @brief 实物闪电发货。注意：在售的闪电发货产品不允许取消闪电发货，需要先下架商品才能取消闪电发货标记
 **/
  bool isLightningConsignment;

/**
 * @brief 是否替换sku
 **/
  bool isReplaceSku;

/**
 * @brief 是否在淘宝上显示（如果传FALSE，则在淘宝主站无法显示该商品）
 **/
  bool isTaobao;

/**
 * @brief 商品是否为新品。只有在当前类目开通新品,并且当前用户拥有该类目下发布新品权限时才能设置is_xinpin为true，否则设置true后会返回错误码:isv.invalid-permission:xinpin。同时只有一口价全新的宝贝才能设置为新品，否则会返回错误码：isv.invalid-parameter:xinpin。不设置参数就保持原有值。
 **/
  bool isXinpin;

/**
 * @brief 表示商品的体积，如果需要使用按体积计费的运费模板，一定要设置这个值。该值的单位为立方米（m3），如果是其他单位，请转换成成立方米。 
该值支持两种格式的设置：格式1：bulk:3,单位为立方米(m3),表示直接设置为商品的体积。格式2：length:10;breadth:10;height:10，单位为米（m）。体积和长宽高都支持小数类型。 
在传入体积或长宽高时候，不能带单位。体积的单位默认为立方米（m3），长宽高的单位默认为米(m) 
在编辑的时候，如果需要删除体积属性，请设置该值为0，如bulk:0
 **/
  QString itemSize;

/**
 * @brief 商品的重量，用于按重量计费的运费模板。注意：单位为kg。 只能传入数值类型（包含小数），不能带单位，单位默认为kg。 在编辑时候，如果需要在商品里删除重量的信息，就需要将值设置为0
 **/
  QString itemWeight;

/**
 * @brief 商品文字的版本，繁体传入”zh_HK”，简体传入”zh_CN”
 **/
  QString lang;

/**
 * @brief 上架时间。大于当前时间则宝贝会下架进入定时上架的宝贝中。
 **/
  QDateTime listTime;

/**
 * @brief 编辑电子凭证宝贝时候表示是否使用邮寄 
0: 代表不使用邮寄； 
1：代表使用邮寄； 
如果不设置这个值，代表不使用邮寄
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
 * @brief 网点ID,在参数empty_fields里设置locality_life.network_id可删除网点ID
 **/
  QString localityLifeNetworkId;

/**
 * @brief 电子凭证售中自动退款比例，百分比%前的数字，介于1-100之间的整数
 **/
  qlonglong localityLifeOnsaleAutoRefundRatio;

/**
 * @brief 退款比例，百分比%前的数字,1-100的正整数值; 在参数empty_fields里设置locality_life.refund_ratio可删除退款比例
 **/
  qlonglong localityLifeRefundRatio;

/**
 * @brief 核销打款,1代表核销打款 0代表非核销打款; 在参数empty_fields里设置locality_life.verification可删除核销打款
 **/
  QString localityLifeVerification;

/**
 * @brief 所在地城市。如杭州 具体可以下载http://dl.open.taobao.com/sdk/商品城市列表.rar 取到
 **/
  QString locationCity;

/**
 * @brief 所在地省份。如浙江 具体可以下载http://dl.open.taobao.com/sdk/商品城市列表.rar 取到
 **/
  QString locationState;

/**
 * @brief 商品数量，取值范围:0-999999的整数。且需要等于Sku所有数量的和 拍卖商品中增加拍只能为1，荷兰拍要在[2,500)范围内。
 **/
  qlonglong num;

/**
 * @brief 商品数字ID，该参数必须
 **/
  qlonglong numIid;

/**
 * @brief 商家编码
 **/
  QString outerId;

/**
 * @brief 拍卖宝贝的保证金。对于增价拍和荷兰拍来说保证金有两种模式：淘宝默认模式（首次出价金额的10%），自定义固定保证金（固定冻结金额只能输入不超过30万的正整数），并且保证金只冻结1次。对于降价拍来说保证金只有淘宝默认的（竞拍价格的10% * 竞拍数量），并且每次出价都需要冻结保证金。 
对于拍卖宝贝来说，保证金是必须的，但是默认使用淘宝默认保证金模式，只有用户需要使用自定义固定保证金的时候才需要使用到这个参数。如果该参数不传或传入0则代表使用默认。
 **/
  qlonglong paimaiInfoDeposit;

/**
 * @brief 降价拍宝贝的降价周期(分钟)。降价拍宝贝的价格每隔paimai_info.interval时间会下降一次increment。
 **/
  qlonglong paimaiInfoInterval;

/**
 * @brief 拍卖商品选择的拍卖类型，拍卖类型包括三种：增价拍(1)，荷兰拍(2)和降价拍(3)。
 **/
  qlonglong paimaiInfoMode;

/**
 * @brief 降价拍宝贝的保留价。对于降价拍来说，paimai_info.reserve必须大于0，且小于price-increment，而且（price-paimai_info.reserve）/increment的计算结果必须为整数
 **/
  QString paimaiInfoReserve;

/**
 * @brief 自定义销售周期的小时数。拍卖宝贝可以自定义销售周期，这里指定销售周期的小时数。自定义销售周期的小时数。拍卖宝贝可以自定义销售周期，这里指定销售周期的小时数。注意，该参数只作为输入参数，不能通过taobao.item.get接口获取。
 **/
  qlonglong paimaiInfoValidHour;

/**
 * @brief 自定义销售周期的分钟数。拍卖宝贝可以自定义销售周期，这里是指定销售周期的分钟数。自定义销售周期的小时数。拍卖宝贝可以自定义销售周期，这里指定销售周期的小时数。注意，该参数只作为输入参数，不能通过taobao.item.get接口获取。
 **/
  qlonglong paimaiInfoValidMinute;

/**
 * @brief 商品主图需要关联的图片空间的相对url。这个url所对应的图片必须要属于当前用户。pic_path和image只需要传入一个,如果两个都传，默认选择pic_path
 **/
  QString picPath;

/**
 * @brief 平邮费用。取值范围:0.01-999.00;精确到2位小数;单位:元。如:5.07，表示:5元7分, 注:post_fee,express_fee,ems_fee需一起填写
 **/
  QString postFee;

/**
 * @brief 宝贝所属的运费模板ID。取值范围：整数且必须是该卖家的运费模板的ID（可通过taobao.postages.get获得当前会话用户的所有邮费模板）
 **/
  qlonglong postageId;

/**
 * @brief 商品价格。取值范围:0-100000000;精确到2位小数;单位:元。如:200.07，表示:200元7分。需要在正确的价格区间内。 拍卖商品对应的起拍价。
 **/
  QString price;

/**
 * @brief 商品所属的产品ID(B商家发布商品需要用)
 **/
  qlonglong productId;

/**
 * @brief 属性值别名。如pid:vid:别名;pid1:vid1:别名1， pid:属性id vid:值id。总长度不超过512字节
 **/
  QString propertyAlias;

/**
 * @brief 商品属性列表。格式:pid:vid;pid:vid。属性的pid调用taobao.itemprops.get取得，属性值的vid用taobao.itempropvalues.get取得vid。 如果该类目下面没有属性，可以不用填写。如果有属性，必选属性必填，其他非必选属性可以选择不填写.属性不能超过35对。所有属性加起来包括分割符不能超过549字节，单个属性没有限制。 如果有属性是可输入的话，则用字段input_str填入属性的值。
 **/
  QString props;

/**
 * @brief 景区门票在选择订金支付时候，需要交的预订费。传入的值是1到20之间的数值，小数点后最多可以保留两位（多余的部分将做四舍五入的处理）。这个数值表示的是预订费的比例，最终的预订费为 scenic_ticket_book_cost乘一口价除以100
 **/
  QString scenicTicketBookCost;

/**
 * @brief 景区门票类宝贝编辑时候，当卖家签订了支付宝代扣协议时候，需要选择支付方式：全额支付和订金支付。当scenic_ticket_pay_way为1时表示全额支付，为2时表示订金支付
 **/
  qlonglong scenicTicketPayWay;

/**
 * @brief 是否承诺退换货服务!虚拟商品无须设置此项!
 **/
  bool sellPromise;

/**
 * @brief 重新关联商品与店铺类目，结构:",cid1,cid2,...,"，如果店铺类目存在二级类目，必须传入子类目cids。
 **/
  QString sellerCids;

/**
 * @brief Sku的外部id串，结构如：1234,1342,… sku_properties, sku_quantities, sku_prices, sku_outer_ids在输入数据时要一一对应，如果没有sku_outer_ids也要写上这个参数，入参是","(这个是两个sku的示列，逗号数应该是sku个数减1)；该参数最大长度是512个字节
 **/
  QString skuOuterIds;

/**
 * @brief 更新的Sku的价格串，结构如：10.00,5.00,… 精确到2位小数;单位:元。如:200.07，表示:200元7分
 **/
  QString skuPrices;

/**
 * @brief 更新的Sku的属性串，调用taobao.itemprops.get获取类目属性，如果属性是销售属性，再用taobao.itempropvalues.get取得vid。格式:pid:vid;pid:vid,多个sku之间用逗号分隔。该字段内的销售属性(自定义的除外)也需要在props字段填写 . 规则：如果该SKU存在旧商品，则修改；否则新增Sku。如果更新时有对Sku进行操作，则Sku的properties一定要传入。如果存在自定义销售属性，则格式为pid:vid;pid2:vid2;$pText:vText，其中$pText:vText为自定义属性。限制：其中$pText的’$’前缀不能少，且pText和vText文本中不可以存在 冒号:和分号;以及逗号
 **/
  QString skuProperties;

/**
 * @brief 更新的Sku的数量串，结构如：num1,num2,num3 如:2,3,4
 **/
  QString skuQuantities;

/**
 * @brief 商品新旧程度。可选值:new（全新）,unused（闲置）,second（二手）。
 **/
  QString stuffStatus;

/**
 * @brief 商品是否支持拍下减库存:1支持;2取消支持(付款减库存);0(默认)不更改
集市卖家默认拍下减库存;
商城卖家默认付款减库存
 **/
  qlonglong subStock;

/**
 * @brief 宝贝标题. 不能超过60字符,受违禁词控制
 **/
  QString title;

/**
 * @brief 有效期。可选值:7,14;单位:天;
 **/
  qlonglong validThru;

/**
 * @brief 商品的重量(商超卖家专用字段)
 **/
  qlonglong weight;

};

#endif  /* ITEMUPDATEREQUEST_H */
