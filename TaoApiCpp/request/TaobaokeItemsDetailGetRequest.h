#ifndef TAOBAOKEITEMSDETAILGETREQUEST_H
#define TAOBAOKEITEMSDETAILGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/TaobaokeItemsDetailGetResponse.h>

/**
 * TOP API: 查询淘宝客推广商品详细信息。 
<p>淘宝客应用、网站接入的过程中，难免会遇到问题，这里对从接入到线上运营的各个环节最常碰到的问题，做了汇总，帮助开发者提高接入的效率。 </p> <p>一、淘宝客网站应用创建流程：<a href="http://open.taobao.com/doc/detail.htm?spm=0.0.0.34.b1f9de&id=1028">http://open.taobao.com/doc/detail.htm?spm=0.0.0.34.b1f9de&id=1028</a></p> <p>二、淘宝客API结合实际使用场景的介绍：<a href="http://open.taobao.com/doc/detail.htm?id=1014">http://open.taobao.com/doc/detail.htm?id=1014</a></p> <p>三、淘宝客网站官方推荐的架构：<a href="http://open.taobao.com/doc/detail.htm?id=1011">http://open.taobao.com/doc/detail.htm?id=1011</a></p> <p>四、淘宝客最常见的几个问题以及解决方案汇总：<a href="http://open.taobao.com/doc/detail.htm?id=1005">http://open.taobao.com/doc/detail.htm?id=1005</a></p>
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TaobaokeItemsDetailGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getFields() const
;  void setFields (QString fields);

 bool getIsMobile() const
;  void setIsMobile (bool isMobile);

 QString getNick() const
;  void setNick (QString nick);

 qlonglong getNumIids() const
;  void setNumIids (qlonglong numIids);

 QString getOuterCode() const
;  void setOuterCode (QString outerCode);

 qlonglong getPid() const
;  void setPid (qlonglong pid);

 qlonglong getReferType() const
;  void setReferType (qlonglong referType);

 QString getTrackIids() const
;  void setTrackIids (QString trackIids);


  virtual TaobaokeItemsDetailGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 需返回的字段列表.可选值:TaobaokeItemDetail淘宝客商品结构体中的所有字段;字段之间用","分隔。item_detail需要设置到Item模型下的字段,如设置:num_iid,detail_url等; 只设置item_detail,则不返回的Item下的所有信息.注：item结构中的skus、videos、props_name不返回
 **/
  QString fields;

/**
 * @brief 标识一个应用是否来在无线或者手机应用,如果是true则会使用其他规则加密点击串.如果不穿值,则默认是false.
 **/
  bool isMobile;

/**
 * @brief 淘宝用户昵称，注：指的是淘宝的会员登录名.如果昵称错误,那么客户就收不到佣金.每个淘宝昵称都对应于一个pid，在这里输入要结算佣金的淘宝昵称，当推广的商品成功后，佣金会打入此输入的淘宝昵称的账户。具体的信息可以登入阿里妈妈的网站查看.
 **/
  QString nick;

/**
 * @brief 淘宝客商品数字id串.最大输入10个.格式如:"value1,value2,value3" 用" , "号分隔商品id.
 **/
  qlonglong numIids;

/**
 * @brief 自定义输入串.格式:英文和数字组成;长度不能大于12个字符,区分不同的推广渠道,如:bbs,表示bbs为推广渠道;blog,表示blog为推广渠道.
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
 * @brief 商品track_iid串（带有追踪效果的商品id),最大输入10个,与num_iids必填其一
 **/
  QString trackIids;

};

#endif  /* TAOBAOKEITEMSDETAILGETREQUEST_H */
