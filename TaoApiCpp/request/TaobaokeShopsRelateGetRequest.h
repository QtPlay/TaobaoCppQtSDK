#ifndef TAOBAOKESHOPSRELATEGETREQUEST_H
#define TAOBAOKESHOPSRELATEGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/TaobaokeShopsRelateGetResponse.h>

/**
 * TOP API: 淘宝客店铺关联推荐。注意：pid、nick为非必选参数，未来pid、nick入参将取消，程序会自动根据appkey对应的nick去查询pid。pid、nick入参将兼容支持到10月31日，请ISV做好改造工作，不要传入pid或nick。 
<p>淘宝客应用、网站接入的过程中，难免会遇到问题，这里对从接入到线上运营的各个环节最常碰到的问题，做了汇总，帮助开发者提高接入的效率。 </p> <p>一、淘宝客网站应用创建流程：<a href="http://open.taobao.com/doc/detail.htm?spm=0.0.0.34.b1f9de&id=1028">http://open.taobao.com/doc/detail.htm?spm=0.0.0.34.b1f9de&id=1028</a></p> <p>二、淘宝客API结合实际使用场景的介绍：<a href="http://open.taobao.com/doc/detail.htm?id=1014">http://open.taobao.com/doc/detail.htm?id=1014</a></p> <p>三、淘宝客网站官方推荐的架构：<a href="http://open.taobao.com/doc/detail.htm?id=1011">http://open.taobao.com/doc/detail.htm?id=1011</a></p> <p>四、淘宝客最常见的几个问题以及解决方案汇总：<a href="http://open.taobao.com/doc/detail.htm?id=1005">http://open.taobao.com/doc/detail.htm?id=1005</a></p>
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TaobaokeShopsRelateGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getFields() const
;  void setFields (QString fields);

 bool getIsMobile() const
;  void setIsMobile (bool isMobile);

 qlonglong getMaxCount() const
;  void setMaxCount (qlonglong maxCount);

 QString getNick() const
;  void setNick (QString nick);

 QString getOuterCode() const
;  void setOuterCode (QString outerCode);

 qlonglong getPid() const
;  void setPid (qlonglong pid);

 qlonglong getSellerId() const
;  void setSellerId (qlonglong sellerId);

 QString getSellerNick() const
;  void setSellerNick (QString sellerNick);

 QString getShopType() const
;  void setShopType (QString shopType);

 QString getSort() const
;  void setSort (QString sort);


  virtual TaobaokeShopsRelateGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 需返回的字段列表.可选值:TaobaokeShop淘宝客商品结构体中的user_id,seller_nick,shop_id,shop_title,seller_credit,shop_type,commission_rate,click_url,total_auction,auction_count,字段之间用","分隔
 **/
  QString fields;

/**
 * @brief 标识一个应用是否来在无线或者手机应用,如果是true则会使用其他规则加密点击串,如果不传值,则默认是false
 **/
  bool isMobile;

/**
 * @brief 指定返回结果的最大条数,实际返回结果个数根据算法来确定
 **/
  qlonglong maxCount;

/**
 * @brief 淘宝用户昵称.注:指的是淘宝的会员登录名.如果昵称错误,那么客户就收不到佣金.每个淘宝昵称都对应于一个pid,在这里输入要结算佣金的淘宝昵称,当推广的商品成功后,佣金会打入此输入的淘宝昵称的账户.具体的信息可以登入阿里妈妈的网站查看
 **/
  QString nick;

/**
 * @brief 自定义输入串.格式:英文和数字组成;长度不能大于12个字符,区分不同的推广渠道,如:bbs,表示bbs为推广渠道;blog,表示blog为推广渠道
 **/
  QString outerCode;

/**
 * @brief 用户的pid,必须是mm_xxxx_0_0这种格式中间的"xxxx". 注意nick和pid至少需要传递一个,如果2个都传了,将以pid为准,且pid的最大长度是20。第一次调用接口的用户，推荐该入参不要填写，使用nick=（淘宝账号）的方式去获取，以免出错。
 **/
  qlonglong pid;

/**
 * @brief 卖家id.seller_id和seller_nick不能同时为空,如果都有值,则以seller_id为主
 **/
  qlonglong sellerId;

/**
 * @brief 卖家昵称
 **/
  QString sellerNick;

/**
 * @brief 店铺类型.所有:all,商城:b,集市:c
 **/
  QString shopType;

/**
 * @brief default(默认排序,关联推荐相关度),commissionRate_desc(佣金比率从高到低), commissionRate_asc(佣金比率从低到高),credit_desc(信用等级从高到低), credit_asc(信用等级从低到高)
 **/
  QString sort;

};

#endif  /* TAOBAOKESHOPSRELATEGETREQUEST_H */
