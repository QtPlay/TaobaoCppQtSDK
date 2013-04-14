#ifndef TAOBAOKEITEMSGETREQUEST_H
#define TAOBAOKEITEMSGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/TaobaokeItemsGetResponse.h>

/**
 * TOP API: 查询淘宝客推广商品,不能通过设置cid=0来查询。注意：pid、nick为非必选参数，未来pid、nick入参将取消，程序会自动根据appkey对应的nick去查询pid。pid、nick入参将兼容支持到10月31日，请ISV做好改造工作，不要传入pid或nick。 
<p>淘宝客应用、网站接入的过程中，难免会遇到问题，这里对从接入到线上运营的各个环节最常碰到的问题，做了汇总，帮助开发者提高接入的效率。 </p> <p>一、淘宝客网站应用创建流程：<a href="http://open.taobao.com/doc/detail.htm?spm=0.0.0.34.b1f9de&id=1028">http://open.taobao.com/doc/detail.htm?spm=0.0.0.34.b1f9de&id=1028</a></p> <p>二、淘宝客API结合实际使用场景的介绍：<a href="http://open.taobao.com/doc/detail.htm?id=1014">http://open.taobao.com/doc/detail.htm?id=1014</a></p> <p>三、淘宝客网站官方推荐的架构：<a href="http://open.taobao.com/doc/detail.htm?id=1011">http://open.taobao.com/doc/detail.htm?id=1011</a></p> <p>四、淘宝客最常见的几个问题以及解决方案汇总：<a href="http://open.taobao.com/doc/detail.htm?id=1005">http://open.taobao.com/doc/detail.htm?id=1005</a></p>
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TaobaokeItemsGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getArea() const
;  void setArea (QString area);

 QString getAutoSend() const
;  void setAutoSend (QString autoSend);

 QString getCashCoupon() const
;  void setCashCoupon (QString cashCoupon);

 QString getCashOndelivery() const
;  void setCashOndelivery (QString cashOndelivery);

 qlonglong getCid() const
;  void setCid (qlonglong cid);

 QString getEndCommissionNum() const
;  void setEndCommissionNum (QString endCommissionNum);

 QString getEndCommissionRate() const
;  void setEndCommissionRate (QString endCommissionRate);

 QString getEndCredit() const
;  void setEndCredit (QString endCredit);

 QString getEndPrice() const
;  void setEndPrice (QString endPrice);

 QString getEndTotalnum() const
;  void setEndTotalnum (QString endTotalnum);

 QString getFields() const
;  void setFields (QString fields);

 QString getGuarantee() const
;  void setGuarantee (QString guarantee);

 bool getIsMobile() const
;  void setIsMobile (bool isMobile);

 QString getKeyword() const
;  void setKeyword (QString keyword);

 QString getMallItem() const
;  void setMallItem (QString mallItem);

 QString getNick() const
;  void setNick (QString nick);

 QString getOnemonthRepair() const
;  void setOnemonthRepair (QString onemonthRepair);

 QString getOuterCode() const
;  void setOuterCode (QString outerCode);

 QString getOverseasItem() const
;  void setOverseasItem (QString overseasItem);

 qlonglong getPageNo() const
;  void setPageNo (qlonglong pageNo);

 qlonglong getPageSize() const
;  void setPageSize (qlonglong pageSize);

 qlonglong getPid() const
;  void setPid (qlonglong pid);

 QString getRealDescribe() const
;  void setRealDescribe (QString realDescribe);

 qlonglong getReferType() const
;  void setReferType (qlonglong referType);

 QString getSevendaysReturn() const
;  void setSevendaysReturn (QString sevendaysReturn);

 QString getSort() const
;  void setSort (QString sort);

 QString getStartCommissionNum() const
;  void setStartCommissionNum (QString startCommissionNum);

 QString getStartCommissionRate() const
;  void setStartCommissionRate (QString startCommissionRate);

 QString getStartCredit() const
;  void setStartCredit (QString startCredit);

 QString getStartPrice() const
;  void setStartPrice (QString startPrice);

 QString getStartTotalnum() const
;  void setStartTotalnum (QString startTotalnum);

 QString getVipCard() const
;  void setVipCard (QString vipCard);


  virtual TaobaokeItemsGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 商品所在地
 **/
  QString area;

/**
 * @brief 是否自动发货
 **/
  QString autoSend;

/**
 * @brief 是否支持抵价券，设置为true表示该商品支持抵价券，设置为false或不设置表示不判断这个属性
 **/
  QString cashCoupon;

/**
 * @brief 是否支持货到付款，设置为true表示该商品是支持货到付款，设置为false或不设置表示不判断这个属性
 **/
  QString cashOndelivery;

/**
 * @brief 标准商品后台类目id。该ID可以通过taobao.itemcats.get接口获取到。
 **/
  qlonglong cid;

/**
 * @brief 30天累计推广量（与返回数据中的commission_num字段对应）上限.
 **/
  QString endCommissionNum;

/**
 * @brief 佣金比率上限，如：2345表示23.45%。注：start_commissionRate和end_commissionRate一起设置才有效。
 **/
  QString endCommissionRate;

/**
 * @brief 可选值和start_credit一样.start_credit的值一定要小于或等于end_credit的值。注：end_credit与start_credit一起使用才生效
 **/
  QString endCredit;

/**
 * @brief 最高价格
 **/
  QString endPrice;

/**
 * @brief 商品总成交量（与返回字段volume对应）上限。
 **/
  QString endTotalnum;

/**
 * @brief 需返回的字段列表.可选值:num_iid,title,nick,pic_url,price,click_url,commission,commission_rate,commission_num,commission_volume,shop_click_url,seller_credit_score,item_location,volume
;字段之间用","分隔
 **/
  QString fields;

/**
 * @brief 是否查询消保卖家
 **/
  QString guarantee;

/**
 * @brief 标识一个应用是否来在无线或者手机应用,如果是true则会使用其他规则加密点击串.如果不传值,则默认是false.
 **/
  bool isMobile;

/**
 * @brief 商品标题中包含的关键字. 注意:查询时keyword,cid至少选择其中一个参数
 **/
  QString keyword;

/**
 * @brief 是否商城的商品，设置为true表示该商品是属于淘宝商城的商品，设置为false或不设置表示不判断这个属性
 **/
  QString mallItem;

/**
 * @brief 淘宝用户昵称，注：指的是淘宝的会员登录名.如果昵称错误,那么客户就收不到佣金.每个淘宝昵称都对应于一个pid，在这里输入要结算佣金的淘宝昵称，当推广的商品成功后，佣金会打入此输入的淘宝昵称的账户。具体的信息可以登入阿里妈妈的网站查看. 
<font color="red">注意nick和pid至少需要传递一个,如果2个都传了,将以pid为准</font>
 **/
  QString nick;

/**
 * @brief 是否30天维修，设置为true表示该商品是支持30天维修，设置为false或不设置表示不判断这个属性
 **/
  QString onemonthRepair;

/**
 * @brief 自定义输入串.格式:英文和数字组成;长度不能大于12个字符,区分不同的推广渠道,如:bbs,表示bbs为推广渠道;blog,表示blog为推广渠道.
 **/
  QString outerCode;

/**
 * @brief 是否海外商品，设置为true表示该商品是属于海外商品，默认为false
 **/
  QString overseasItem;

/**
 * @brief 结果页数.1~10
 **/
  qlonglong pageNo;

/**
 * @brief 每页返回结果数.最大每页40
 **/
  qlonglong pageSize;

/**
 * @brief 用户的pid,必须是mm_xxxx_0_0这种格式中间的"xxxx".
<font color="red">注意nick和pid至少需要传递一个,如果2个都传了,将以pid为准,且pid的最大长度是20</font>。第一次调用接口的用户，推荐该入参不要填写，使用nick=（淘宝账号）的方式去获取，以免出错。
 **/
  qlonglong pid;

/**
 * @brief 是否如实描述(即:先行赔付)商品，设置为true表示该商品是如实描述的商品，设置为false或不设置表示不判断这个属性
 **/
  QString realDescribe;

/**
 * @brief 点击串跳转类型，1：单品，2：单品中间页（无线暂无）
 **/
  qlonglong referType;

/**
 * @brief 是否支持7天退换，设置为true表示该商品支持7天退换，设置为false或不设置表示不判断这个属性
 **/
  QString sevendaysReturn;

/**
 * @brief 默认排序:default

price_desc(价格从高到低) 
price_asc(价格从低到高) 
credit_desc(信用等级从高到低) 
commissionRate_desc(佣金比率从高到低) 
commissionRate_asc(佣金比率从低到高) 
commissionNum_desc(成交量成高到低) 
commissionNum_asc(成交量从低到高) 
commissionVolume_desc(总支出佣金从高到低) 
commissionVolume_asc(总支出佣金从低到高) 
delistTime_desc(商品下架时间从高到低) 
delistTime_asc(商品下架时间从低到高)
 **/
  QString sort;

/**
 * @brief 30天累计推广量（与返回数据中的commission_num字段对应）下限.注：该字段要与end_commissionNum一起使用才生效
 **/
  QString startCommissionNum;

/**
 * @brief 佣金比率下限，如：1234表示12.34%
 **/
  QString startCommissionRate;

/**
 * @brief 卖家信用: 
 
1heart(一心)  
2heart (两心)  
3heart(三心)  
4heart(四心)  
5heart(五心)  
1diamond(一钻)  
2diamond(两钻)  
3diamond(三钻)  
4diamond(四钻)  
5diamond(五钻)  
1crown(一冠)  
2crown(两冠)  
3crown(三冠)  
4crown(四冠)  
5crown(五冠)  
1goldencrown(一黄冠)  
2goldencrown(二黄冠)  
3goldencrown(三黄冠)  
4goldencrown(四黄冠)  
5goldencrown(五黄冠)
 **/
  QString startCredit;

/**
 * @brief 起始价格.传入价格参数时,需注意起始价格和最高价格必须一起传入,并且 start_price <= end_price
 **/
  QString startPrice;

/**
 * @brief 商品总成交量（与返回字段volume对应）下限。
 **/
  QString startTotalnum;

/**
 * @brief 是否支持VIP卡，设置为true表示该商品支持VIP卡，设置为false或不设置表示不判断这个属性
 **/
  QString vipCard;

};

#endif  /* TAOBAOKEITEMSGETREQUEST_H */
