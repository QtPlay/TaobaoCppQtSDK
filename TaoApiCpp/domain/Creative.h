#ifndef CREATIVE_H
#define CREATIVE_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QString>


/**
 * @brief 创意
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class Creative : public TaoDomain
{

public:
 virtual ~Creative() { }

  qlonglong getAdgroupId() const;
  void setAdgroupId (qlonglong adgroupId);
  QString getAuditDesc() const;
  void setAuditDesc (QString auditDesc);
  QString getAuditStatus() const;
  void setAuditStatus (QString auditStatus);
  qlonglong getCampaignId() const;
  void setCampaignId (qlonglong campaignId);
  QDateTime getCreateTime() const;
  void setCreateTime (QDateTime createTime);
  qlonglong getCreativeId() const;
  void setCreativeId (qlonglong creativeId);
  QString getImgUrl() const;
  void setImgUrl (QString imgUrl);
  QDateTime getModifiedTime() const;
  void setModifiedTime (QDateTime modifiedTime);
  QString getNick() const;
  void setNick (QString nick);
  QString getTitle() const;
  void setTitle (QString title);
  
  virtual void parseResponse();

private:
/**
 * @brief 推广组id
 **/
  qlonglong adgroupId;

/**
 * @brief 审核拒绝原因描述
 **/
  QString auditDesc;

/**
 * @brief 审核状态： audit_wait-待审核；audit_pass-审核通过(上线)；audit_reject-审核拒绝；默认为audit_pass。
 **/
  QString auditStatus;

/**
 * @brief 推广计划Id
 **/
  qlonglong campaignId;

/**
 * @brief 创建时间
 **/
  QDateTime createTime;

/**
 * @brief 创意id
 **/
  qlonglong creativeId;

/**
 * @brief 创意图片地址，必须是推广组对应商品的图片之一
 **/
  QString imgUrl;

/**
 * @brief 最后修改时间
 **/
  QDateTime modifiedTime;

/**
 * @brief 主人昵称
 **/
  QString nick;

/**
 * @brief 创意标题，最多20个汉字
 **/
  QString title;

};

#endif  /* CREATIVE_H */
