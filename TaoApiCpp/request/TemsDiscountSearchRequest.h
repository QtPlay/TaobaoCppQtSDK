#ifndef TEMSDISCOUNTSEARCHREQUEST_H
#define TEMSDISCOUNTSEARCHREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/TemsDiscountSearchResponse.h>

/**
 * TOP API: 获取天猫折扣商品的精选结果。在得到商品ID列表后，再调用 taobao.taobaoke.widget.items.convert 获取有佣金的淘客推广链接。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TemsDiscountSearchRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getAuctionTag() const
;  void setAuctionTag (qlonglong auctionTag);

 qlonglong getBrand() const
;  void setBrand (qlonglong brand);

 QString getCat() const
;  void setCat (QString cat);

 QString getEndPrice() const
;  void setEndPrice (QString endPrice);

 qlonglong getPostFee() const
;  void setPostFee (qlonglong postFee);

 QString getQ() const
;  void setQ (QString q);

 QString getSort() const
;  void setSort (QString sort);

 qlonglong getStart() const
;  void setStart (qlonglong start);

 QString getStartPrice() const
;  void setStartPrice (QString startPrice);


  virtual TemsDiscountSearchResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 商品标签。天猫精品库：8578；品牌特卖商品库：3458；天猫原创商品库：4801
 **/
  qlonglong auctionTag;

/**
 * @brief 品牌的id。点击某品牌类目的时候会出现。
 **/
  qlonglong brand;

/**
 * @brief 前台类目id，目前其他接口无法获取，只能自己去寻找。建议使用关键字获取数据。支持多选过滤，cat=catid1,catid2。
 **/
  QString cat;

/**
 * @brief 商品最高价格
 **/
  QString endPrice;

/**
 * @brief 是否包邮，-1为包邮
 **/
  qlonglong postFee;

/**
 * @brief 表示搜索的关键字，例如搜索query=nike。当输入关键字为中文时，将对他进行URLEncode的UTF-8格式编码，如 耐克，那么q=%E8%80%90%E5%85%8B。
 **/
  QString q;

/**
 * @brief 排序类型。类型包括： 
s: 人气排序 
p: 价格从低到高; 
pd: 价格从高到低; 
d: 月销量从高到低; 
td: 总销量从高到低; 
pt: 按发布时间排序.
 **/
  QString sort;

/**
 * @brief 可以用该字段来实现分页功能。表示查询起始位置，默认从第0条开始，start=10,表示从第10条数据开始查询，start不得大于1000。
 **/
  qlonglong start;

/**
 * @brief 商品最低价格
 **/
  QString startPrice;

};

#endif  /* TEMSDISCOUNTSEARCHREQUEST_H */
