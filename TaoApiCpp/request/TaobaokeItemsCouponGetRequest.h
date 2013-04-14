#ifndef TAOBAOKEITEMSCOUPONGETREQUEST_H
#define TAOBAOKEITEMSCOUPONGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/TaobaokeItemsCouponGetResponse.h>

/**
 * TOP API: 查询淘客折扣商品。 
<p>淘宝客应用、网站接入的过程中，难免会遇到问题，这里对从接入到线上运营的各个环节最常碰到的问题，做了汇总，帮助开发者提高接入的效率。 </p> <p>一、淘宝客网站应用创建流程：<a href="http://open.taobao.com/doc/detail.htm?spm=0.0.0.34.b1f9de&id=1028">http://open.taobao.com/doc/detail.htm?spm=0.0.0.34.b1f9de&id=1028</a></p> <p>二、淘宝客API结合实际使用场景的介绍：<a href="http://open.taobao.com/doc/detail.htm?id=1014">http://open.taobao.com/doc/detail.htm?id=1014</a></p> <p>三、淘宝客网站官方推荐的架构：<a href="http://open.taobao.com/doc/detail.htm?id=1011">http://open.taobao.com/doc/detail.htm?id=1011</a></p> <p>四、淘宝客最常见的几个问题以及解决方案汇总：<a href="http://open.taobao.com/doc/detail.htm?id=1005">http://open.taobao.com/doc/detail.htm?id=1005</a></p>
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TaobaokeItemsCouponGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getArea() const
;  void setArea (QString area);

 qlonglong getCid() const
;  void setCid (qlonglong cid);

 qlonglong getCouponType() const
;  void setCouponType (qlonglong couponType);

 qlonglong getEndCommissionNum() const
;  void setEndCommissionNum (qlonglong endCommissionNum);

 qlonglong getEndCommissionRate() const
;  void setEndCommissionRate (qlonglong endCommissionRate);

 qlonglong getEndCommissionVolume() const
;  void setEndCommissionVolume (qlonglong endCommissionVolume);

 qlonglong getEndCouponRate() const
;  void setEndCouponRate (qlonglong endCouponRate);

 QString getEndCredit() const
;  void setEndCredit (QString endCredit);

 qlonglong getEndVolume() const
;  void setEndVolume (qlonglong endVolume);

 QString getFields() const
;  void setFields (QString fields);

 bool getIsMobile() const
;  void setIsMobile (bool isMobile);

 QString getKeyword() const
;  void setKeyword (QString keyword);

 QString getNick() const
;  void setNick (QString nick);

 QString getOuterCode() const
;  void setOuterCode (QString outerCode);

 qlonglong getPageNo() const
;  void setPageNo (qlonglong pageNo);

 qlonglong getPageSize() const
;  void setPageSize (qlonglong pageSize);

 qlonglong getPid() const
;  void setPid (qlonglong pid);

 qlonglong getReferType() const
;  void setReferType (qlonglong referType);

 QString getShopType() const
;  void setShopType (QString shopType);

 QString getSort() const
;  void setSort (QString sort);

 qlonglong getStartCommissionNum() const
;  void setStartCommissionNum (qlonglong startCommissionNum);

 qlonglong getStartCommissionRate() const
;  void setStartCommissionRate (qlonglong startCommissionRate);

 qlonglong getStartCommissionVolume() const
;  void setStartCommissionVolume (qlonglong startCommissionVolume);

 qlonglong getStartCouponRate() const
;  void setStartCouponRate (qlonglong startCouponRate);

 QString getStartCredit() const
;  void setStartCredit (QString startCredit);

 qlonglong getStartVolume() const
;  void setStartVolume (qlonglong startVolume);


  virtual TaobaokeItemsCouponGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 商品所在地
 **/
  QString area;

/**
 * @brief 标准商品后台类目id。该ID可以通过taobao.itemcats.get接口获取到。
 **/
  qlonglong cid;

/**
 * @brief 优惠商品类型.1:打折商品,默认值为1
 **/
  qlonglong couponType;

/**
 * @brief 设置30天累计推广量（与返回数据中的commission_num字段对应）上限.注：该字段要与start_commissionNum一起使用才生效
 **/
  qlonglong endCommissionNum;

/**
 * @brief 最高佣金比率选项，如：2345表示23.45%。注：要起始佣金比率和最高佣金比率一起设置才有效。
 **/
  qlonglong endCommissionRate;

/**
 * @brief 最高累计推广佣金选项
 **/
  qlonglong endCommissionVolume;

/**
 * @brief 设置折扣比例范围上限,如：8000表示80.00%.注：要起始折扣比率和最高折扣比率一起设置才有效
 **/
  qlonglong endCouponRate;

/**
 * @brief 可选值和start_credit一样.start_credit的值一定要小于或等于end_credit的值。注：end_credit与start_credit一起使用才生效
 **/
  QString endCredit;

/**
 * @brief 设置商品总成交量（与返回字段volume对应）上限。
 **/
  qlonglong endVolume;

/**
 * @brief 需返回的字段列表.可选值:num_iid,title,nick,pic_url,price,click_url,commission,commission_rate,commission_num,commission_volume,shop_click_url,seller_credit_score,item_location,volume,coupon_price,coupon_rate,coupon_start_time,coupon_end_time,shop_type;字段之间用","分隔
 **/
  QString fields;

/**
 * @brief 标识一个应用是否来在无线或者手机应用,如果是true则会使用其他规则加密点击串.如果不传值,则默认是false
 **/
  bool isMobile;

/**
 * @brief 商品标题中包含的关键字. 注意:查询时keyword,cid至少选择其中一个参数
 **/
  QString keyword;

/**
 * @brief 推广者的淘宝会员昵称.注:指的是淘宝的会员登录名
 **/
  QString nick;

/**
 * @brief 自定义输入串.格式:英文和数字组成;长度不能大于12个字符,区分不同的推广渠道,如:bbs,表示bbs为推广渠道;blog,表示blog为推广渠道
 **/
  QString outerCode;

/**
 * @brief 结果页数.1~99
 **/
  qlonglong pageNo;

/**
 * @brief 每页返回结果数.最大每页100
 **/
  qlonglong pageSize;

/**
 * @brief 用户的pid,必须是mm_xxxx_0_0这种格式中间的"xxxx". 注意nick和pid至少需要传递一个,如果2个都传了,将以pid为准,且pid的最大长度是20。第一次调用接口的用户，推荐该入参不要填写，使用nick=（淘宝账号）的方式去获取，以免出错。
 **/
  qlonglong pid;

/**
 * @brief 点击串跳转类型，1：单品，2：单品中间页（无线暂无）
 **/
  qlonglong referType;

/**
 * @brief 店铺类型.默认all,商城:b,集市:c
 **/
  QString shopType;

/**
 * @brief default(默认排序), 
price_desc(折扣价格从高到低), 
price_asc(折扣价格从低到高), 
credit_desc(信用等级从高到低), 
credit_asc(信用等级从低到高), 
commissionRate_desc(佣金比率从高到低), 
commissionRate_asc(佣金比率从低到高), 
volume_desc(成交量成高到低), volume_asc(成交量从低到高)
 **/
  QString sort;

/**
 * @brief 设置30天累计推广量（与返回数据中的commission_num字段对应）下限.注：该字段要与end_commissionNum一起使用才生效
 **/
  qlonglong startCommissionNum;

/**
 * @brief 起始佣金比率选项，如：1234表示12.34%
 **/
  qlonglong startCommissionRate;

/**
 * @brief 起始累计推广量佣金.注：返回的数据是30天内累计推广佣金，该字段要与最高累计推广佣金一起使用才生效
 **/
  qlonglong startCommissionVolume;

/**
 * @brief 设置折扣比例范围下限,如：7000表示70.00%
 **/
  qlonglong startCouponRate;

/**
 * @brief 卖家信用: 1heart(一心) 2heart (两心) 3heart(三心) 4heart(四心) 5heart(五心) 1diamond(一钻) 2diamond(两钻) 3diamond(三钻) 4diamond(四钻) 5diamond(五钻) 1crown(一冠) 2crown(两冠) 3crown(三冠) 4crown(四冠) 5crown(五冠) 1goldencrown(一黄冠) 2goldencrown(二黄冠) 3goldencrown(三黄冠) 4goldencrown(四黄冠) 5goldencrown(五黄冠)
 **/
  QString startCredit;

/**
 * @brief 设置商品总成交量（与返回字段volume对应）下限。
 **/
  qlonglong startVolume;

};

#endif  /* TAOBAOKEITEMSCOUPONGETREQUEST_H */
