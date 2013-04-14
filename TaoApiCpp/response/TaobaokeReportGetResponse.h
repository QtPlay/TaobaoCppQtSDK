#ifndef TAOBAOKEREPORTGETRESPONSE_H
#define TAOBAOKEREPORTGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/TaobaokeReport.h>


/**
 * @brief TOP RESPONSE API: 淘客报表查询，报表接口只能获取到该appkey对应的创建者（淘宝账号）的推广数据。目前只支持获取订单成功的报表。订单创建、订单失效、退款订单请直接在www.alimama.com后台进行查询。 
<p>淘宝客应用、网站接入的过程中，难免会遇到问题，这里对从接入到线上运营的各个环节最常碰到的问题，做了汇总，帮助开发者提高接入的效率。 </p> <p>一、淘宝客网站应用创建流程：<a href="http://open.taobao.com/doc/detail.htm?spm=0.0.0.34.b1f9de&id=1028">http:http://open.taobao.com/doc/detail.htm?spm=0.0.0.34.b1f9de&id=1028</a></p> <p>二、淘宝客API结合实际使用场景的介绍：<a href="http://open.taobao.com/doc/detail.htm?id=1014">http://open.taobao.com/doc/detail.htm?id=1014</a></p> <p>三、淘宝客网站官方推荐的架构：<a href="http://open.taobao.com/doc/detail.htm?id=1011">http://open.taobao.com/doc/detail.htm?id=1011</a></p> <p>四、淘宝客最常见的几个问题以及解决方案汇总：<a href="http://open.taobao.com/doc/detail.htm?id=1005">http://open.taobao.com/doc/detail.htm?id=1005</a></p>
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TaobaokeReportGetResponse : public TaoResponse
{
public:
 virtual ~TaobaokeReportGetResponse() { }

  TaobaokeReport getTaobaokeReport() const;
  void setTaobaokeReport (TaobaokeReport taobaokeReport);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 淘宝客报表
 **/
  TaobaokeReport taobaokeReport;

};

#endif
