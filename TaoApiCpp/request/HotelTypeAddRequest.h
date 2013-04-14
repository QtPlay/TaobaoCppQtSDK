#ifndef HOTELTYPEADDREQUEST_H
#define HOTELTYPEADDREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/HotelTypeAddResponse.h>

/**
 * TOP API: 此接口用于发布一个房型，房型的发布者是当前会话的用户。如果该房型在淘宝集市酒店下已经存在，则会返回错误提示。 
该接口发布的是一个新增房型申请，需要淘宝小二审核
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class HotelTypeAddRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getHid() const
;  void setHid (qlonglong hid);

 QString getName() const
;  void setName (QString name);

 QString getSiteParam() const
;  void setSiteParam (QString siteParam);


  virtual HotelTypeAddResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 酒店id。必须为数字
 **/
  qlonglong hid;

/**
 * @brief 房型名称。长度不能超过30
 **/
  QString name;

/**
 * @brief 接入卖家数据主键,格式为“接入方酒店id-接入方房型id”
 **/
  QString siteParam;

};

#endif  /* HOTELTYPEADDREQUEST_H */
