#ifndef AREASGETREQUEST_H
#define AREASGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/AreasGetResponse.h>

/**
 * TOP API: 查询标准地址区域代码信息 参考：http://www.stats.gov.cn/tjbz/xzqhdm/t20100623_402652267.htm
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class AreasGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getFields() const
;  void setFields (QString fields);


  virtual AreasGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 需返回的字段列表.可选值:Area 结构中的所有字段;多个字段之间用","分隔.如:id,type,name,parent_id,zip.
 **/
  QString fields;

};

#endif  /* AREASGETREQUEST_H */
