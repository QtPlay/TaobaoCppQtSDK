#ifndef ITEM_H
#define ITEM_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QList>
#include <QString>
#include <TaoApiCpp/domain/DeliveryTime.h>
#include <TaoApiCpp/domain/DescModuleInfo.h>
#include <TaoApiCpp/domain/FoodSecurity.h>
#include <TaoApiCpp/domain/ItemImg.h>
#include <TaoApiCpp/domain/LocalityLife.h>
#include <TaoApiCpp/domain/Location.h>
#include <TaoApiCpp/domain/PaimaiInfo.h>
#include <TaoApiCpp/domain/PropImg.h>
#include <TaoApiCpp/domain/Sku.h>
#include <TaoApiCpp/domain/Video.h>


/**
 * @brief Item(商品)结构
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class Item : public TaoDomain
{

public:
 virtual ~Item() { }

  qlonglong getAfterSaleId() const;
  void setAfterSaleId (qlonglong afterSaleId);
  QString getApproveStatus() const;
  void setApproveStatus (QString approveStatus);
  qlonglong getAuctionPoint() const;
  void setAuctionPoint (qlonglong auctionPoint);
  QString getAutoFill() const;
  void setAutoFill (QString autoFill);
  QString getChangeProp() const;
  void setChangeProp (QString changeProp);
  qlonglong getCid() const;
  void setCid (qlonglong cid);
  qlonglong getCodPostageId() const;
  void setCodPostageId (qlonglong codPostageId);
  QDateTime getCreated() const;
  void setCreated (QDateTime created);
  QDateTime getDelistTime() const;
  void setDelistTime (QDateTime delistTime);
  DeliveryTime getDeliveryTime() const;
  void setDeliveryTime (DeliveryTime deliveryTime);
  QString getDesc() const;
  void setDesc (QString desc);
  DescModuleInfo getDescModuleInfo() const;
  void setDescModuleInfo (DescModuleInfo descModuleInfo);
  QString getDetailUrl() const;
  void setDetailUrl (QString detailUrl);
  QString getEmsFee() const;
  void setEmsFee (QString emsFee);
  QString getExpressFee() const;
  void setExpressFee (QString expressFee);
  QString getFeatures() const;
  void setFeatures (QString features);
  FoodSecurity getFoodSecurity() const;
  void setFoodSecurity (FoodSecurity foodSecurity);
  QString getFreightPayer() const;
  void setFreightPayer (QString freightPayer);
  QString getGlobalStockType() const;
  void setGlobalStockType (QString globalStockType);
  bool getHasDiscount() const;
  void setHasDiscount (bool hasDiscount);
  bool getHasInvoice() const;
  void setHasInvoice (bool hasInvoice);
  bool getHasShowcase() const;
  void setHasShowcase (bool hasShowcase);
  bool getHasWarranty() const;
  void setHasWarranty (bool hasWarranty);
  QString getIncrement() const;
  void setIncrement (QString increment);
  qlonglong getInnerShopAuctionTemplateId() const;
  void setInnerShopAuctionTemplateId (qlonglong innerShopAuctionTemplateId);
  QString getInputPids() const;
  void setInputPids (QString inputPids);
  QString getInputStr() const;
  void setInputStr (QString inputStr);
  bool getIs3D() const;
  void setIs3D (bool is3D);
  bool getIsEx() const;
  void setIsEx (bool isEx);
  qlonglong getIsFenxiao() const;
  void setIsFenxiao (qlonglong isFenxiao);
  bool getIsLightningConsignment() const;
  void setIsLightningConsignment (bool isLightningConsignment);
  bool getIsPrepay() const;
  void setIsPrepay (bool isPrepay);
  bool getIsTaobao() const;
  void setIsTaobao (bool isTaobao);
  bool getIsTiming() const;
  void setIsTiming (bool isTiming);
  bool getIsVirtual() const;
  void setIsVirtual (bool isVirtual);
  bool getIsXinpin() const;
  void setIsXinpin (bool isXinpin);
  QList<ItemImg> getItemImgs() const;
  void setItemImgs (QList<ItemImg> itemImgs);
  QString getItemSize() const;
  void setItemSize (QString itemSize);
  QString getItemWeight() const;
  void setItemWeight (QString itemWeight);
  QDateTime getListTime() const;
  void setListTime (QDateTime listTime);
  LocalityLife getLocalityLife() const;
  void setLocalityLife (LocalityLife localityLife);
  Location getLocation() const;
  void setLocation (Location location);
  QDateTime getModified() const;
  void setModified (QDateTime modified);
  QString getNick() const;
  void setNick (QString nick);
  qlonglong getNum() const;
  void setNum (qlonglong num);
  qlonglong getNumIid() const;
  void setNumIid (qlonglong numIid);
  bool getOneStation() const;
  void setOneStation (bool oneStation);
  QString getOuterId() const;
  void setOuterId (QString outerId);
  qlonglong getOuterShopAuctionTemplateId() const;
  void setOuterShopAuctionTemplateId (qlonglong outerShopAuctionTemplateId);
  PaimaiInfo getPaimaiInfo() const;
  void setPaimaiInfo (PaimaiInfo paimaiInfo);
  QString getPicUrl() const;
  void setPicUrl (QString picUrl);
  QString getPostFee() const;
  void setPostFee (QString postFee);
  qlonglong getPostageId() const;
  void setPostageId (qlonglong postageId);
  QString getPrice() const;
  void setPrice (QString price);
  qlonglong getProductId() const;
  void setProductId (qlonglong productId);
  QString getPromotedService() const;
  void setPromotedService (QString promotedService);
  QList<PropImg> getPropImgs() const;
  void setPropImgs (QList<PropImg> propImgs);
  QString getPropertyAlias() const;
  void setPropertyAlias (QString propertyAlias);
  QString getProps() const;
  void setProps (QString props);
  QString getPropsName() const;
  void setPropsName (QString propsName);
  qlonglong getScore() const;
  void setScore (qlonglong score);
  QString getSecondKill() const;
  void setSecondKill (QString secondKill);
  bool getSellPromise() const;
  void setSellPromise (bool sellPromise);
  QString getSellerCids() const;
  void setSellerCids (QString sellerCids);
  QList<Sku> getSkus() const;
  void setSkus (QList<Sku> skus);
  QString getStuffStatus() const;
  void setStuffStatus (QString stuffStatus);
  qlonglong getSubStock() const;
  void setSubStock (qlonglong subStock);
  QString getTemplateId() const;
  void setTemplateId (QString templateId);
  QString getTitle() const;
  void setTitle (QString title);
  QString getType() const;
  void setType (QString type);
  qlonglong getValidThru() const;
  void setValidThru (qlonglong validThru);
  QList<Video> getVideos() const;
  void setVideos (QList<Video> videos);
  bool getViolation() const;
  void setViolation (bool violation);
  qlonglong getVolume() const;
  void setVolume (qlonglong volume);
  QString getWapDesc() const;
  void setWapDesc (QString wapDesc);
  QString getWapDetailUrl() const;
  void setWapDetailUrl (QString wapDetailUrl);
  qlonglong getWithHoldQuantity() const;
  void setWithHoldQuantity (qlonglong withHoldQuantity);
  bool getWwStatus() const;
  void setWwStatus (bool wwStatus);
  
  virtual void parseResponse();

private:
/**
 * @brief 售后服务ID,该字段仅在taobao.item.get接口中返回
 **/
  qlonglong afterSaleId;

/**
 * @brief 商品上传后的状态。onsale出售中，instock库中
 **/
  QString approveStatus;

/**
 * @brief 天猫订单抽佣比例，为5的倍数，最低0.5%。跟淘客佣金没有关系。
 **/
  qlonglong auctionPoint;

/**
 * @brief 代充商品类型。只有少数类目下的商品可以标记上此字段，具体哪些类目可以上传可以通过taobao.itemcat.features.get获得。在代充商品的类目下，不传表示不标记商品类型（交易搜索中就不能通过标记搜到相关的交易了）。可选类型： 
time_card(点卡软件代充) 
fee_card(话费软件代充)
 **/
  QString autoFill;

/**
 * @brief 基础色数据
 **/
  QString changeProp;

/**
 * @brief 商品所属的叶子类目 id
 **/
  qlonglong cid;

/**
 * @brief 货到付款运费模板ID
 **/
  qlonglong codPostageId;

/**
 * @brief Item的发布时间，目前仅供taobao.item.add和taobao.item.get可用
 **/
  QDateTime created;

/**
 * @brief 下架时间（格式：yyyy-MM-dd HH:mm:ss）
 **/
  QDateTime delistTime;

/**
 * @brief 发货时间信息
 **/
  DeliveryTime deliveryTime;

/**
 * @brief 商品描述, 字数要大于5个字符，小于25000个字符
 **/
  QString desc;

/**
 * @brief 宝贝描述规范化模块锚点信息
 **/
  DescModuleInfo descModuleInfo;

/**
 * @brief 商品url
 **/
  QString detailUrl;

/**
 * @brief ems费用,格式：5.00；单位：元；精确到：分
 **/
  QString emsFee;

/**
 * @brief 快递费用,格式：5.00；单位：元；精确到：分
 **/
  QString expressFee;

/**
 * @brief 宝贝特征值， 
只有在Top支持的特征值才能保存到宝贝上
 **/
  QString features;

/**
 * @brief 食品安全信息，包括：生产许可证编号、产品标准号、厂名、厂址等
 **/
  FoodSecurity foodSecurity;

/**
 * @brief 运费承担方式,seller（卖家承担），buyer(买家承担）
 **/
  QString freightPayer;

/**
 * @brief 针对全球购卖家的库存类型业务，有两种库存类型：现货和代购; 
参数值为1时代表现货，值为2时代表代购
 **/
  QString globalStockType;

/**
 * @brief 支持会员打折,true/false
 **/
  bool hasDiscount;

/**
 * @brief 是否有发票,true/false
 **/
  bool hasInvoice;

/**
 * @brief 橱窗推荐,true/false
 **/
  bool hasShowcase;

/**
 * @brief 是否有保修,true/false
 **/
  bool hasWarranty;

/**
 * @brief 加价幅度。如果为0，代表系统代理幅度。 
在竞拍中，为了超越上一个出价，会员需要在当前出价上增加金额，这个金额就是加价幅度。卖家在发布宝贝的时候可以自定义加价幅度，也可以让系统自动代理加价。系统自动代理加价的加价幅度随着当前出价金额的增加而增加，我们建议会员使用系统自动代理加价，并请买家在出价前看清楚加价幅度的具体金额。另外需要注意是，此功能只适用于拍卖的商品。 
以下是系统自动代理加价幅度表： 
当前价（加价幅度 ） 
1-40（ 1 ）、41-100（ 2 ）、101-200（5 ）、201-500 （10）、501-1001（15）、001-2000（25）、2001-5000（50）、5001-10000（100） 
10001以上         200
 **/
  QString increment;

/**
 * @brief 用户内店宝贝装修模板id
 **/
  qlonglong innerShopAuctionTemplateId;

/**
 * @brief 用户自行输入的类目属性ID串。结构："pid1,pid2,pid3"，如："20000"（表示品牌） 注：通常一个类目下用户可输入的关键属性不超过1个。
 **/
  QString inputPids;

/**
 * @brief 用户自行输入的子属性名和属性值，结构:"父属性值;一级子属性名;一级子属性值;二级子属性名;自定义输入值,....",如：“耐克;耐克系列;科比系列;科比系列;2K5”，input_str需要与input_pids一一对应，注：通常一个类目下用户可输入的关键属性不超过1个。所有属性别名加起来不能超过 3999字节。
 **/
  QString inputStr;

/**
 * @brief 是否是3D淘宝的商品
 **/
  bool is3D;

/**
 * @brief 是否在外部网店显示
 **/
  bool isEx;

/**
 * @brief 非分销商品：0，代销：1，经销：2
 **/
  qlonglong isFenxiao;

/**
 * @brief 是否24小时闪电发货
 **/
  bool isLightningConsignment;

/**
 * @brief 商品是否为先行赔付 
taobao.items.search和taobao.items.vip.search专用
 **/
  bool isPrepay;

/**
 * @brief 是否在淘宝显示
 **/
  bool isTaobao;

/**
 * @brief 是否定时上架商品
 **/
  bool isTiming;

/**
 * @brief 虚拟商品的状态字段
 **/
  bool isVirtual;

/**
 * @brief 标示商品是否为新品。 
值含义：true-是，false-否。
 **/
  bool isXinpin;

/**
 * @brief 商品图片列表(包括主图)。fields中只设置item_img可以返回ItemImg结构体中所有字段，如果设置为item_img.id、item_img.url、item_img.position等形式就只会返回相应的字段
 **/
  QList<ItemImg> itemImgs;

/**
 * @brief 表示商品的体积，用于按体积计费的运费模板。该值的单位为立方米（m3）。 
该值支持两种格式的设置：格式1：bulk:3,单位为立方米(m3),表示直接设置为商品的体积。格式2：weight:10;breadth:10;height:10，单位为米（m）
 **/
  QString itemSize;

/**
 * @brief 商品的重量，用于按重量计费的运费模板。注意：单位为kg
 **/
  QString itemWeight;

/**
 * @brief 上架时间（格式：yyyy-MM-dd HH:mm:ss）
 **/
  QDateTime listTime;

/**
 * @brief 本地生活电子交易凭证业务，目前此字段只涉及到的信息为有效期: 
如果有效期为起止日期类型，此值为2012-08-06,2012-08-16 
如果有效期为【购买成功日 至】类型则格式为2012-08-16 
如果有效期为天数类型则格式为3
 **/
  LocalityLife localityLife;

/**
 * @brief 商品所在地
 **/
  Location location;

/**
 * @brief 商品修改时间（格式：yyyy-MM-dd HH:mm:ss）
 **/
  QDateTime modified;

/**
 * @brief 卖家昵称
 **/
  QString nick;

/**
 * @brief 商品数量
 **/
  qlonglong num;

/**
 * @brief 商品数字id
 **/
  qlonglong numIid;

/**
 * @brief 是否淘1站商品
 **/
  bool oneStation;

/**
 * @brief 商家外部编码(可与商家外部系统对接)
 **/
  QString outerId;

/**
 * @brief 用户外店装修模板id
 **/
  qlonglong outerShopAuctionTemplateId;

/**
 * @brief 用于保存拍卖有关的信息
 **/
  PaimaiInfo paimaiInfo;

/**
 * @brief 商品主图片地址
 **/
  QString picUrl;

/**
 * @brief 平邮费用,格式：5.00；单位：元；精确到：分
 **/
  QString postFee;

/**
 * @brief 宝贝所属的运费模板ID，如果没有返回则说明没有使用运费模板
 **/
  qlonglong postageId;

/**
 * @brief 商品价格，格式：5.00；单位：元；精确到：分
 **/
  QString price;

/**
 * @brief 宝贝所属产品的id(可能为空). 该字段可以通过taobao.products.search 得到
 **/
  qlonglong productId;

/**
 * @brief 消保类型，多个类型以,分割。可取以下值：
2：假一赔三；4：7天无理由退换货；taobao.items.search和taobao.items.vip.search专用
 **/
  QString promotedService;

/**
 * @brief 商品属性图片列表。fields中只设置prop_img可以返回PropImg结构体中所有字段，如果设置为prop_img.id、prop_img.url、prop_img.properties、prop_img.position等形式就只会返回相应的字段
 **/
  QList<PropImg> propImgs;

/**
 * @brief 属性值别名,比如颜色的自定义名称
 **/
  QString propertyAlias;

/**
 * @brief 商品属性 格式：pid:vid;pid:vid
 **/
  QString props;

/**
 * @brief 商品属性名称。标识着props内容里面的pid和vid所对应的名称。格式为：pid1:vid1:pid_name1:vid_name1;pid2:vid2:pid_name2:vid_name2……(<strong>注：</strong><font color="red">属性名称中的冒号":"被转换为："#cln#";  
分号";"被转换为："#scln#"
</font>)
 **/
  QString propsName;

/**
 * @brief 商品所属卖家的信用等级数，1表示1心，2表示2心……，只有调用商品搜索:taobao.items.get和taobao.items.search的时候才能返回
 **/
  qlonglong score;

/**
 * @brief 秒杀商品类型。打上秒杀标记的商品，用户只能下架并不能再上架，其他任何编辑或删除操作都不能进行。如果用户想取消秒杀标记，需要联系小二进行操作。如果秒杀结束需要自由编辑请联系活动负责人（小二）去掉秒杀标记。可选类型 
web_only(只能通过web网络秒杀) 
wap_only(只能通过wap网络秒杀) 
web_and_wap(既能通过web秒杀也能通过wap秒杀)
 **/
  QString secondKill;

/**
 * @brief 是否承诺退换货服务!
 **/
  bool sellPromise;

/**
 * @brief 商品所属的店铺内卖家自定义类目列表
 **/
  QString sellerCids;

/**
 * @brief <a href="http://open.taobao.com/dev/index.php/Sku">Sku</a>列表。fields中只设置sku可以返回Sku结构体中所有字段，如果设置为sku.sku_id、sku.properties、sku.quantity等形式就只会返回相应的字段
 **/
  QList<Sku> skus;

/**
 * @brief 商品新旧程度(全新:new，闲置:unused，二手：second)
 **/
  QString stuffStatus;

/**
 * @brief 商品是否支持拍下减库存:1支持;2取消支持(付款减库存);0(默认)不更改 集市卖家默认拍下减库存; 商城卖家默认付款减库存
 **/
  qlonglong subStock;

/**
 * @brief 页面模板id
 **/
  QString templateId;

/**
 * @brief 商品标题,不能超过60字节
 **/
  QString title;

/**
 * @brief 商品类型(fixed:一口价;auction:拍卖)注：取消团购
 **/
  QString type;

/**
 * @brief 有效期,7或者14（默认是14天）
 **/
  qlonglong validThru;

/**
 * @brief 商品视频列表(目前只支持单个视频关联)。fields中只设置video可以返回Video结构体中所有字段，如果设置为video.id、video.video_id、 
video.url等形式就只会返回相应的字段
 **/
  QList<Video> videos;

/**
 * @brief 商品是否违规，违规：true , 不违规：false
 **/
  bool violation;

/**
 * @brief 对应搜索商品列表页的最近成交量,只有调用商品搜索:taobao.items.get和taobao.items.search的时候才能返回
 **/
  qlonglong volume;

/**
 * @brief 不带html标签的desc文本信息，该字段只在taobao.item.get接口中返回
 **/
  QString wapDesc;

/**
 * @brief 适合wap应用的商品详情url ，该字段只在taobao.item.get接口中返回
 **/
  QString wapDetailUrl;

/**
 * @brief 预扣库存，即付款减库存的商品现在有多少处于未付款状态的订单
 **/
  qlonglong withHoldQuantity;

/**
 * @brief 商品所属的商家的旺旺在线状况， 
taobao.items.search和taobao.items.vip.search专用
 **/
  bool wwStatus;

};

#endif  /* ITEM_H */
