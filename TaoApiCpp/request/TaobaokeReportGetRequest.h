#ifndef TAOBAOKEREPORTGETREQUEST_H
#define TAOBAOKEREPORTGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/TaobaokeReportGetResponse.h>

/**
 * TOP API: 淘客报表查询，报表接口只能获取到该appkey对应的创建者（淘宝账号）的推广数据。目前只支持获取订单成功的报表。订单创建、订单失效、退款订单请直接在www.alimama.com后台进行查询。 
<p>淘宝客应用、网站接入的过程中，难免会遇到问题，这里对从接入到线上运营的各个环节最常碰到的问题，做了汇总，帮助开发者提高接入的效率。 </p> <p>一、淘宝客网站应用创建流程：<a href="http://open.taobao.com/doc/detail.htm?spm=0.0.0.34.b1f9de&id=1028">http:http://open.taobao.com/doc/detail.htm?spm=0.0.0.34.b1f9de&id=1028</a></p> <p>二、淘宝客API结合实际使用场景的介绍：<a href="http://open.taobao.com/doc/detail.htm?id=1014">http://open.taobao.com/doc/detail.htm?id=1014</a></p> <p>三、淘宝客网站官方推荐的架构：<a href="http://open.taobao.com/doc/detail.htm?id=1011">http://open.taobao.com/doc/detail.htm?id=1011</a></p> <p>四、淘宝客最常见的几个问题以及解决方案汇总：<a href="http://open.taobao.com/doc/detail.htm?id=1005">http://open.taobao.com/doc/detail.htm?id=1005</a></p>
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TaobaokeReportGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getDate() const
;  void setDate (QString date);

 QString getFields() const
;  void setFields (QString fields);

 qlonglong getPageNo() const
;  void setPageNo (qlonglong pageNo);

 qlonglong getPageSize() const
;  void setPageSize (qlonglong pageSize);


  virtual TaobaokeReportGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 买家确认收货时间，有效的日期为最近3个月内的某一天，格式为:yyyyMMdd,如20090520.
 **/
  QString date;

/**
 * @brief 需返回的字段列表.可选值:TaobaokeReportMember淘宝客报表成员结构体中的所有字段;字段之间用","分隔.
 **/
  QString fields;

/**
 * @brief 当前页数.只能获取1-499页数据.
 **/
  qlonglong pageNo;

/**
 * @brief 每页返回结果数,默认是40条.最大每页100
 **/
  qlonglong pageSize;

};

#endif  /* TAOBAOKEREPORTGETREQUEST_H */
