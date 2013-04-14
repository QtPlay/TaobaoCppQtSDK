#ifndef SPMEFFECTGETREQUEST_H
#define SPMEFFECTGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SpmeffectGetResponse.h>

/**
 * TOP API: 导购效果SPM报表查询，可查询某天某站点某频道某页面为淘宝带来的流量及成交情况（对于page和module最多返回10000条数据，请正确使用spm数据） 
只能查询距离今天3个月内的数据
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SpmeffectGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getDate() const
;  void setDate (QString date);

 bool getModuleDetail() const
;  void setModuleDetail (bool moduleDetail);

 bool getPageDetail() const
;  void setPageDetail (bool pageDetail);


  virtual SpmeffectGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 日期
 **/
  QString date;

/**
 * @brief 查询指定的SPM第四位的效果报表。默认值为false，不传视为不需要
 **/
  bool moduleDetail;

/**
 * @brief 查询指定的SPM第三位的效果报表。默认值为false，不传视为不需要
 **/
  bool pageDetail;

};

#endif  /* SPMEFFECTGETREQUEST_H */
