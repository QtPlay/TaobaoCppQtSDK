#ifndef FREIGHTCOMPANY_H
#define FREIGHTCOMPANY_H

#include <TaoApiCpp/TaoDomain.h>
#include <QList>
#include <QString>
#include <TaoApiCpp/domain/WangwangInfo.h>


/**
 * @brief 线路的相关公司信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FreightCompany : public TaoDomain
{

public:
 virtual ~FreightCompany() { }

  QString getComments() const;
  void setComments (QString comments);
  qlonglong getCompanyId() const;
  void setCompanyId (qlonglong companyId);
  QString getCompanyName() const;
  void setCompanyName (QString companyName);
  QString getCompanyeCode() const;
  void setCompanyeCode (QString companyeCode);
  QString getCorpLevel() const;
  void setCorpLevel (QString corpLevel);
  QString getCustomerServiceTel() const;
  void setCustomerServiceTel (QString customerServiceTel);
  QString getLogoUrl() const;
  void setLogoUrl (QString logoUrl);
  QString getShopUrl() const;
  void setShopUrl (QString shopUrl);
  qlonglong getSort() const;
  void setSort (qlonglong sort);
  QString getVasFeeHelpUrl() const;
  void setVasFeeHelpUrl (QString vasFeeHelpUrl);
  QList<WangwangInfo> getWangwangList() const;
  void setWangwangList (QList<WangwangInfo> wangwangList);
  
  virtual void parseResponse();

private:
/**
 * @brief 物流公司描述
 **/
  QString comments;

/**
 * @brief 公司id
 **/
  qlonglong companyId;

/**
 * @brief 物流公司名
 **/
  QString companyName;

/**
 * @brief 物流公司code标识
 **/
  QString companyeCode;

/**
 * @brief 公司级别。auth：认证；brand：品牌；noAuth：未认证；normal：普通
 **/
  QString corpLevel;

/**
 * @brief 物流公司客服电话
 **/
  QString customerServiceTel;

/**
 * @brief 物流公司logo url
 **/
  QString logoUrl;

/**
 * @brief 物流公司店铺地址
 **/
  QString shopUrl;

/**
 * @brief 物流公司排序值
 **/
  qlonglong sort;

/**
 * @brief 公司增值服务说明链接
 **/
  QString vasFeeHelpUrl;

/**
 * @brief 旺旺列表
 **/
  QList<WangwangInfo> wangwangList;

};

#endif  /* FREIGHTCOMPANY_H */
