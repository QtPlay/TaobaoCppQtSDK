#ifndef WANGWANGESERVICESTREAMWEIGTHSGETRESPONSE_H
#define WANGWANGESERVICESTREAMWEIGTHSGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/StreamWeight.h>


/**
 * @brief TOP RESPONSE API: 获取当前登录用户自己的店铺内的分流权重设置，只支持xml 返回。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WangwangEserviceStreamweigthsGetResponse : public TaoResponse
{
public:
 virtual ~WangwangEserviceStreamweigthsGetResponse() { }

  qlonglong getResultCode() const;
  void setResultCode (qlonglong resultCode);  qlonglong getResultCount() const;
  void setResultCount (qlonglong resultCount);  QList<StreamWeight> getStaffStreamWeights() const;
  void setStaffStreamWeights (QList<StreamWeight> staffStreamWeights);  qlonglong getTotalWeight() const;
  void setTotalWeight (qlonglong totalWeight);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 0表示返回正确
 **/
  qlonglong resultCode;

/**
 * @brief 返回数据条数
 **/
  qlonglong resultCount;

/**
 * @brief 分流权重数据
 **/
  QList<StreamWeight> staffStreamWeights;

/**
 * @brief 返回数据的总权重，返回数据为空的时候没有这个数字
 **/
  qlonglong totalWeight;

};

#endif
