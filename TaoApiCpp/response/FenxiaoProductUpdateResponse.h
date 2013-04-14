#ifndef FENXIAOPRODUCTUPDATERESPONSE_H
#define FENXIAOPRODUCTUPDATERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QDateTime>


/**
 * @brief TOP RESPONSE API: 更新分销平台产品数据，不传更新数据返回失败<br> 
1. 对sku进行增、删操作时，原有的sku_ids字段会被忽略，请使用sku_properties和sku_properties_del。<br>
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoProductUpdateResponse : public TaoResponse
{
public:
 virtual ~FenxiaoProductUpdateResponse() { }

  QDateTime getModified() const;
  void setModified (QDateTime modified);  qlonglong getPid() const;
  void setPid (qlonglong pid);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 更新时间，时间格式：yyyy-MM-dd HH:mm:ss
 **/
  QDateTime modified;

/**
 * @brief 产品ID
 **/
  qlonglong pid;

};

#endif
