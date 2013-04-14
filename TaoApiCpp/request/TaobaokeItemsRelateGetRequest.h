#ifndef TAOBAOKEITEMSRELATEGETREQUEST_H
#define TAOBAOKEITEMSRELATEGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/TaobaokeItemsRelateGetResponse.h>

/**
 * TOP API: 商品关联推荐。注意：pid、nick为非必选参数，未来pid、nick入参将取消，程序会自动根据appkey对应的nick去查询pid。pid、nick入参将兼容支持到10月31日，请ISV做好改造工作，不要传入pid或nick。 
<p>淘宝客应用、网站接入的过程中，难免会遇到问题，这里对从接入到线上运营的各个环节最常碰到的问题，做了汇总，帮助开发者提高接入的效率。 </p> <p>一、淘宝客网站应用创建流程：<a href="http://open.taobao.com/doc/detail.htm?spm=0.0.0.34.b1f9de&id=1028">http://open.taobao.com/doc/detail.htm?spm=0.0.0.34.b1f9de&id=1028</a></p> <p>二、淘宝客API结合实际使用场景的介绍：<a href="http://open.taobao.com/doc/detail.htm?id=1014">http://open.taobao.com/doc/detail.htm?id=1014</a></p> <p>三、淘宝客网站官方推荐的架构：<a href="http://open.taobao.com/doc/detail.htm?id=1011">http://open.taobao.com/doc/detail.htm?id=1011</a></p> <p>四、淘宝客最常见的几个问题以及解决方案汇总：<a href="http://open.taobao.com/doc/detail.htm?id=1005">http://open.taobao.com/doc/detail.htm?id=1005</a></p>
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TaobaokeItemsRelateGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getCid() const
;  void setCid (qlonglong cid);

 QString getFields() const
;  void setFields (QString fields);

 bool getIsMobile() const
;  void setIsMobile (bool isMobile);

 qlonglong getMaxCount() const
;  void setMaxCount (qlonglong maxCount);

 QString getNick() const
;  void setNick (QString nick);

 qlonglong getNumIid() const
;  void setNumIid (qlonglong numIid);

 QString getOuterCode() const
;  void setOuterCode (QString outerCode);

 qlonglong getPid() const
;  void setPid (qlonglong pid);

 qlonglong getReferType() const
;  void setReferType (qlonglong referType);

 qlonglong getRelateType() const
;  void setRelateType (qlonglong relateType);

 qlonglong getSellerId() const
;  void setSellerId (qlonglong sellerId);

 QString getShopType() const
;  void setShopType (QString shopType);

 QString getSort() const
;  void setSort (QString sort);

 QString getTrackIid() const
;  void setTrackIid (QString trackIid);


  virtual TaobaokeItemsRelateGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 分类id.推荐类型为5时cid不能为空。仅支持叶子类目ID，即通过taobao.itemcats.get获取到is_parent=false的cid。
 **/
  qlonglong cid;

/**
 * @brief 需返回的字段列表.可选值:num_iid,title,nick,pic_url,price,click_url,commission,ommission_rate,commission_num,commission_volume,shop_click_url,seller_credit_score,item_location,volume;字段之间用","分隔
 **/
  QString fields;

/**
 * @brief 标识一个应用是否来在无线或者手机应用,如果是true则会使用其他规则加密点击串.如果不传值,则默认是false
 **/
  bool isMobile;

/**
 * @brief 指定返回结果的最大条数.实际返回结果个数根据算法来确定,所以该值会小于或者等于该值
 **/
  qlonglong maxCount;

/**
 * @brief 推广者的淘宝会员昵称.注:指的是淘宝的会员登录名
 **/
  QString nick;

/**
 * @brief 淘宝客商品数字id.推荐类型为1,2,3时num_iid不能为空
 **/
  qlonglong numIid;

/**
 * @brief 自定义输入串.格式:英文和数字组成;长度不能大于12个字符,区分不同的推广渠道,如:bbs,表示bbs为推广渠道;blog,表示blog为推广渠道
 **/
  QString outerCode;

/**
 * @brief 用户的pid,必须是mm_xxxx_0_0这种格式中间的"xxxx". 注意nick和pid至少需要传递一个,如果2个都传了,将以pid为准,且pid的最大长度是20。第一次调用接口的用户，推荐该入参不要填写，使用nick=（淘宝账号）的方式去获取，以免出错。
 **/
  qlonglong pid;

/**
 * @brief 点击串跳转类型，1：单品，2：单品中间页（无线暂无）
 **/
  qlonglong referType;

/**
 * @brief <p>推荐类型.</p>
<p>1:同类商品推荐;此时必须得输入num_iid</p>
<p>2:异类商品推荐;此时必须得输入num_iid</p>
<p>3:同店商品推荐;此时必须得输入num_iid</p>
<p>4:店铺热门推荐;此时必须得输入seller_id，这里的seller_id得通过<a href="http://api.taobao.com/apidoc/api.htm?path=cid:38-apiId:10449">taobao.taobaoke.shops.get</a>
跟<a href="http://api.taobao.com/apidoc/api.htm?path=cid:38-apiId:21419">taobao.taobaoke.widget.shops.convert</a>这两个接口去获取user_id字段</p>
<p>5:类目热门推荐;此时必须得输入cid</p>
 **/
  qlonglong relateType;

/**
 * @brief 卖家的用户id，这里的seller_id得通过<a href="http://api.taobao.com/apidoc/api.htm?path=cid:38-apiId:10449">taobao.taobaoke.shops.get</a>
跟<a href="http://api.taobao.com/apidoc/api.htm?path=cid:38-apiId:21419">taobao.taobaoke.widget.shops.convert</a>这两个接口去获取user_id字段。
注：推荐类型为4时seller_id不能为空
 **/
  qlonglong sellerId;

/**
 * @brief 店铺类型.默认all,商城:b,集市:c
 **/
  QString shopType;

/**
 * @brief default(默认排序,关联推荐相关度),price_desc(价格从高到低), price_asc(价格从低到高),commissionRate_desc(佣金比率从高到低), commissionRate_asc(佣金比率从低到高), commissionNum_desc(成交量成高到低), commissionNum_asc(成交量从低到高)
 **/
  QString sort;

/**
 * @brief 商品数字ID(带有跟踪效果)
 **/
  QString trackIid;

};

#endif  /* TAOBAOKEITEMSRELATEGETREQUEST_H */
