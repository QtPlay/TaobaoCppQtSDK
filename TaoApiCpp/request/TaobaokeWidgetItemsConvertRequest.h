#ifndef TAOBAOKEWIDGETITEMSCONVERTREQUEST_H
#define TAOBAOKEWIDGETITEMSCONVERTREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/TaobaokeWidgetItemsConvertResponse.h>

/**
 * TOP API: 淘客商品转换，该接口只支持js方式去调用，具体的调用方式参考文档【http://open.taobao.com/doc/detail.htm?id=101372】 
 
<p>淘宝客应用、网站接入的过程中，难免会遇到问题，这里对从接入到线上运营的各个环节最常碰到的问题，做了汇总，帮助开发者提高接入的效率。 </p> <p>一、淘宝客网站应用创建流程：<a href="http://open.taobao.com/doc/detail.htm?spm=0.0.0.34.b1f9de&id=1028">http://open.taobao.com/doc/detail.htm?spm=0.0.0.34.b1f9de&id=1028</a></p> <p>二、淘宝客API结合实际使用场景的介绍：<a href="http://open.taobao.com/doc/detail.htm?id=1014">http://open.taobao.com/doc/detail.htm?id=1014</a></p> <p>三、淘宝客网站官方推荐的架构：<a href="http://open.taobao.com/doc/detail.htm?id=1011">http://open.taobao.com/doc/detail.htm?id=1011</a></p> <p>四、淘宝客最常见的几个问题以及解决方案汇总：<a href="http://open.taobao.com/doc/detail.htm?id=1005">http://open.taobao.com/doc/detail.htm?id=1005</a></p>
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TaobaokeWidgetItemsConvertRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getFields() const
;  void setFields (QString fields);

 bool getIsMobile() const
;  void setIsMobile (bool isMobile);

 qlonglong getNumIids() const
;  void setNumIids (qlonglong numIids);

 QString getOuterCode() const
;  void setOuterCode (QString outerCode);

 QString getTrackIids() const
;  void setTrackIids (QString trackIids);


  virtual TaobaokeWidgetItemsConvertResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 需返回的字段列表.可选值:num_iid,title,nick,pic_url,price,click_url,commission,commission_rate,commission_num,commission_volume,shop_click_url,seller_credit_score,item_location,volume
;字段之间用","分隔.
 **/
  QString fields;

/**
 * @brief 标识一个应用是否来自无线或者手机应用,如果是true，则会使用其他规则加密点击串.如果不穿值,则默认是false.
 **/
  bool isMobile;

/**
 * @brief 淘宝客商品数字id串.最大输入40个.格式如:"value1,value2,value3" 用" , "号分隔商品数字id
 **/
  qlonglong numIids;

/**
 * @brief 自定义输入串.格式:英文和数字组成;长度不能大于12个字符,区分不同的推广渠道,如:bbs,表示bbs为推广渠道;blog,表示blog为推广渠道.
 **/
  QString outerCode;

/**
 * @brief 商品track_iid串（带有追踪效果的商品id),最大输入40个,与num_iids必填其一
 **/
  QString trackIids;

};

#endif  /* TAOBAOKEWIDGETITEMSCONVERTREQUEST_H */
