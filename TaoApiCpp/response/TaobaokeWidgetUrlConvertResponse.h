#ifndef TAOBAOKEWIDGETURLCONVERTRESPONSE_H
#define TAOBAOKEWIDGETURLCONVERTRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/TaobaokeItem.h>


/**
 * @brief TOP RESPONSE API: 活动推广API可以把天猫、聚划算、淘宝旅行、淘宝游戏等平台的活动链接转换为淘宝客推广链接，该接口只支持js方式去调用，具体的调用方式参考文档【http://open.taobao.com/doc/detail.htm?id=101372】 
<p>淘宝客应用、网站接入的过程中，难免会遇到问题，这里对从接入到线上运营的各个环节最常碰到的问题，做了汇总，帮助开发者提高接入的效率。 </p> <p>一、淘宝客网站应用创建流程：<a href="http://open.taobao.com/doc/detail.htm?spm=0.0.0.34.b1f9de&id=1028">http://open.taobao.com/doc/detail.htm?spm=0.0.0.34.b1f9de&id=1028</a></p> <p>二、淘宝客API结合实际使用场景的介绍：<a href="http://open.taobao.com/doc/detail.htm?id=1014">http://open.taobao.com/doc/detail.htm?id=1014</a></p> <p>三、淘宝客网站官方推荐的架构：<a href="http://open.taobao.com/doc/detail.htm?id=1011">http://open.taobao.com/doc/detail.htm?id=1011</a></p> <p>四、淘宝客最常见的几个问题以及解决方案汇总：<a href="http://open.taobao.com/doc/detail.htm?id=1005">http://open.taobao.com/doc/detail.htm?id=1005</a></p>
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TaobaokeWidgetUrlConvertResponse : public TaoResponse
{
public:
 virtual ~TaobaokeWidgetUrlConvertResponse() { }

  TaobaokeItem getTaobaokeItem() const;
  void setTaobaokeItem (TaobaokeItem taobaokeItem);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 只返回click_url
 **/
  TaobaokeItem taobaokeItem;

};

#endif
