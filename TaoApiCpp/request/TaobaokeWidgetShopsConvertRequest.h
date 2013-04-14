#ifndef TAOBAOKEWIDGETSHOPSCONVERTREQUEST_H
#define TAOBAOKEWIDGETSHOPSCONVERTREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/TaobaokeWidgetShopsConvertResponse.h>

/**
 * TOP API: 淘客店铺转换，该接口只支持js方式去调用，具体的调用方式参考文档【http://open.taobao.com/doc/detail.htm?id=101372】 
<p>淘宝客应用、网站接入的过程中，难免会遇到问题，这里对从接入到线上运营的各个环节最常碰到的问题，做了汇总，帮助开发者提高接入的效率。 </p> <p>一、淘宝客网站应用创建流程：<a href="http://open.taobao.com/doc/detail.htm?spm=0.0.0.34.b1f9de&id=1028">http://open.taobao.com/doc/detail.htm?spm=0.0.0.34.b1f9de&id=1028</a></p> <p>二、淘宝客API结合实际使用场景的介绍：<a href="http://open.taobao.com/doc/detail.htm?id=1014">http://open.taobao.com/doc/detail.htm?id=1014</a></p> <p>三、淘宝客网站官方推荐的架构：<a href="http://open.taobao.com/doc/detail.htm?id=1011">http://open.taobao.com/doc/detail.htm?id=1011</a></p> <p>四、淘宝客最常见的几个问题以及解决方案汇总：<a href="http://open.taobao.com/doc/detail.htm?id=1005">http://open.taobao.com/doc/detail.htm?id=1005</a></p>
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TaobaokeWidgetShopsConvertRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getFields() const
;  void setFields (QString fields);

 bool getIsMobile() const
;  void setIsMobile (bool isMobile);

 QString getOuterCode() const
;  void setOuterCode (QString outerCode);

 QString getSellerNicks() const
;  void setSellerNicks (QString sellerNicks);


  virtual TaobaokeWidgetShopsConvertResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 需返回的字段列表.可选值:TaobaokeShop淘宝客商品结构体中的user_id,shop_title,click_url,commission_rate;字段之间用","分隔.
 **/
  QString fields;

/**
 * @brief 标识一个应用是否来在无线或者手机应用,如果是true则会使用其他规则加密点击串.如果不传值,则默认是false.
 **/
  bool isMobile;

/**
 * @brief 自定义输入串.格式:英文和数字组成;长度不能大于12个字符,区分不同的推广渠道,如:bbs,表示bbs为推广渠道;blog,表示blog为推广渠道.
 **/
  QString outerCode;

/**
 * @brief 卖家昵称串.最大输入10个.格式如:"value1,value2,value3" 用" , "号分隔。
 **/
  QString sellerNicks;

};

#endif  /* TAOBAOKEWIDGETSHOPSCONVERTREQUEST_H */
