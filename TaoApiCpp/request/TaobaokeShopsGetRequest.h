#ifndef TAOBAOKESHOPSGETREQUEST_H
#define TAOBAOKESHOPSGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/TaobaokeShopsGetResponse.h>

/**
 * TOP API: 提供对参加了淘客推广的店铺的搜索。 
<p>淘宝客应用、网站接入的过程中，难免会遇到问题，这里对从接入到线上运营的各个环节最常碰到的问题，做了汇总，帮助开发者提高接入的效率。 </p> <p>一、淘宝客网站应用创建流程：<a href="http://open.taobao.com/doc/detail.htm?spm=0.0.0.34.b1f9de&id=1028">http://open.taobao.com/doc/detail.htm?spm=0.0.0.34.b1f9de&id=1028</a></p> <p>二、淘宝客API结合实际使用场景的介绍：<a href="http://open.taobao.com/doc/detail.htm?id=1014">http://open.taobao.com/doc/detail.htm?id=1014</a></p> <p>三、淘宝客网站官方推荐的架构：<a href="http://open.taobao.com/doc/detail.htm?id=1011">http://open.taobao.com/doc/detail.htm?id=1011</a></p> <p>四、淘宝客最常见的几个问题以及解决方案汇总：<a href="http://open.taobao.com/doc/detail.htm?id=1005">http://open.taobao.com/doc/detail.htm?id=1005</a></p>
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TaobaokeShopsGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getCid() const
;  void setCid (qlonglong cid);

 QString getEndAuctioncount() const
;  void setEndAuctioncount (QString endAuctioncount);

 QString getEndCommissionrate() const
;  void setEndCommissionrate (QString endCommissionrate);

 QString getEndCredit() const
;  void setEndCredit (QString endCredit);

 QString getEndTotalaction() const
;  void setEndTotalaction (QString endTotalaction);

 QString getFields() const
;  void setFields (QString fields);

 bool getIsMobile() const
;  void setIsMobile (bool isMobile);

 QString getKeyword() const
;  void setKeyword (QString keyword);

 QString getNick() const
;  void setNick (QString nick);

 bool getOnlyMall() const
;  void setOnlyMall (bool onlyMall);

 QString getOuterCode() const
;  void setOuterCode (QString outerCode);

 qlonglong getPageNo() const
;  void setPageNo (qlonglong pageNo);

 qlonglong getPageSize() const
;  void setPageSize (qlonglong pageSize);

 qlonglong getPid() const
;  void setPid (qlonglong pid);

 QString getSortField() const
;  void setSortField (QString sortField);

 QString getSortType() const
;  void setSortType (QString sortType);

 QString getStartAuctioncount() const
;  void setStartAuctioncount (QString startAuctioncount);

 QString getStartCommissionrate() const
;  void setStartCommissionrate (QString startCommissionrate);

 QString getStartCredit() const
;  void setStartCredit (QString startCredit);

 QString getStartTotalaction() const
;  void setStartTotalaction (QString startTotalaction);


  virtual TaobaokeShopsGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 店铺前台展示类目id，可以通过taobao.shopcats.list.get获取。
 **/
  qlonglong cid;

/**
 * @brief 店铺商品数查询结束值。需要跟start_auctioncount同时设置才生效，只设置该值不生效。
 **/
  QString endAuctioncount;

/**
 * @brief 店铺佣金比例查询结束值
 **/
  QString endCommissionrate;

/**
 * @brief 店铺掌柜信用等级查询结束 
店铺的信用等级总共为20级 1-5:1heart-5heart;6-10:1diamond-5diamond;11-15:1crown-5crown;16-20:1goldencrown-5goldencrown
 **/
  QString endCredit;

/**
 * @brief 店铺累计推广数查询结束值
 **/
  QString endTotalaction;

/**
 * @brief 需要返回的字段，目前包括如下字段 user_id click_url shop_title commission_rate seller_credit shop_type auction_count total_auction
 **/
  QString fields;

/**
 * @brief 标识一个应用是否来在无线或者手机应用,如果是true则会使用其他规则加密点击串.如果不传值,则默认是false.
 **/
  bool isMobile;

/**
 * @brief 店铺主题关键字查询
 **/
  QString keyword;

/**
 * @brief 淘宝用户昵称，注：指的是淘宝的会员登录名.如果昵称错误,那么客户就收不到佣金.每个淘宝昵称都对应于一个pid，在这里输入要结算佣金的淘宝昵称，当推广的商品成功后，佣金会打入此输入的淘宝昵称的账户。具体的信息可以登入阿里妈妈的网站查看
 **/
  QString nick;

/**
 * @brief 是否只显示商城店铺
 **/
  bool onlyMall;

/**
 * @brief 自定义输入串.格式:英文和数字组成;长度不能大于12个字符,区分不同的推广渠道,如:bbs,表示bbs为推广渠道;blog,表示blog为推广渠道.
 **/
  QString outerCode;

/**
 * @brief 页码.结果页1~99
 **/
  qlonglong pageNo;

/**
 * @brief 每页条数.最大每页40
 **/
  qlonglong pageSize;

/**
 * @brief 用户的pid,必须是mm_xxxx_0_0这种格式中间的"xxxx". 注意nick和pid至少需要传递一个,如果2个都传了,将以pid为准,且pid的最大长度是20。第一次调用接口的用户，推荐该入参不要填写，使用nick=（淘宝账号）的方式去获取，以免出错。
 **/
  qlonglong pid;

/**
 * @brief 排序字段。目前支持的排序字段有： 
commission_rate，auction_count，total_auction。必须输入这三个任意值，否则排序无效
 **/
  QString sortField;

/**
 * @brief 排序类型.必须输入desc,asc任一值，否则无效 
desc-降序,asc-升序
 **/
  QString sortType;

/**
 * @brief 店铺宝贝数查询开始值。需要跟end_auctioncount同时设置才生效，只设置该值不生效。
 **/
  QString startAuctioncount;

/**
 * @brief 店铺佣金比例查询开始值，注意佣金比例是x10000的整数.50表示0.5%
 **/
  QString startCommissionrate;

/**
 * @brief 店铺掌柜信用等级起始 
店铺的信用等级总共为20级 1-5:1heart-5heart;6-10:1diamond-5diamond;11-15:1crown-5crown;16-20:1goldencrown-5goldencrown
 **/
  QString startCredit;

/**
 * @brief 店铺累计推广量开始值
 **/
  QString startTotalaction;

};

#endif  /* TAOBAOKESHOPSGETREQUEST_H */
