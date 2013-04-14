#ifndef SCITEMMAPADDRESPONSE_H
#define SCITEMMAPADDRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 创建IC商品或分销商品与后端商品的映射关系
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ScitemMapAddResponse : public TaoResponse
{
public:
 virtual ~ScitemMapAddResponse() { }

  QString getOuterCode() const;
  void setOuterCode (QString outerCode);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 接口调用返回结果信息：商家编码
 **/
  QString outerCode;

};

#endif
